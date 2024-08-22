// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRSET_H
#define CRSET_H

@class NSArray, NSString, NSHashTable;
@protocol CRDataType, NSFastEnumeration, CRCoding;

#import <Foundation/Foundation.h>

#import "CRDictionary.h"
#import "CRDocument.h"

@interface CRSet : NSObject <CRDataType, NSFastEnumeration, CRCoding>



@property (readonly, copy) NSArray *allObjects;
@property (readonly) NSUInteger count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CRDictionary *dictionary; // ivar: _dictionary
@property (weak, nonatomic) CRDocument *document;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (readonly) Class superclass;


-(BOOL)containsObject:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)anyObject;
-(id)deltaSince:(id)arg0 in:(id)arg1 ;
-(id)init;
-(id)initWithCRCoder:(id)arg0 ;
-(id)initWithCRCoder:(id)arg0 set:(*void)arg1 ;
-(id)initWithCRCoder:(id)arg0 set:(*void)arg1 elementValueDecoder:(id)arg2 ;
-(id)initWithDocument:(id)arg0 ;
-(id)member:(id)arg0 ;
-(id)tombstone;
-(void)addObject:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)encodeWithCRCoder:(id)arg0 ;
-(void)encodeWithCRCoder:(id)arg0 set:(*void)arg1 ;
-(void)encodeWithCRCoder:(id)arg0 set:(*void)arg1 elementValueCoder:(id)arg2 ;
-(void)mergeWith:(id)arg0 ;
-(void)realizeLocalChangesIn:(id)arg0 ;
-(void)removeAllObjects;
-(void)removeObject:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)setObject:(id)arg0 ;
-(void)setUpdated:(id)arg0 ;
-(void)walkGraph:(id)arg0 ;


@end


#endif