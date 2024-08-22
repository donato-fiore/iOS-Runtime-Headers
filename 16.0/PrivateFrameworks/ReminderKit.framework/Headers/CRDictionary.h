// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRDICTIONARY_H
#define CRDICTIONARY_H

@class NSMapTable, NSString;
@protocol CRDataType, NSFastEnumeration, CRCoding;

#import <Foundation/Foundation.h>

#import "CRDocument.h"

@interface CRDictionary : NSObject <CRDataType, NSFastEnumeration, CRCoding>



@property (retain, nonatomic) NSMapTable *contents; // ivar: _contents
@property (readonly) NSUInteger count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) CRDocument *document; // ivar: _document
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger removeClock; // ivar: _removeClock
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)deltaSince:(id)arg0 in:(id)arg1 ;
-(id)init;
-(id)initWithCRCoder:(id)arg0 ;
-(id)initWithCRCoder:(id)arg0 dictionary:(*void)arg1 ;
-(id)initWithCRCoder:(id)arg0 dictionary:(*void)arg1 elementValueDecoder:(id)arg2 ;
-(id)initWithDocument:(id)arg0 ;
-(id)keyEnumerator;
-(id)objectForKey:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(id)tombstone;
-(void)encodeWithCRCoder:(id)arg0 ;
-(void)encodeWithCRCoder:(id)arg0 dictionary:(*void)arg1 ;
-(void)encodeWithCRCoder:(id)arg0 dictionary:(*void)arg1 elementValueCoder:(id)arg2 ;
-(void)enumerateKeysObjectsAndTimestampsUsingBlock:(id)arg0 ;
-(void)mergeWith:(id)arg0 ;
-(void)mergeWithDictionary:(id)arg0 ;
-(void)realizeLocalChangesIn:(id)arg0 ;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;
-(void)walkGraph:(id)arg0 ;


@end


#endif