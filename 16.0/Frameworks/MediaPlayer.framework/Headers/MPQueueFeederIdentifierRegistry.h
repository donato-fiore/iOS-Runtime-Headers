// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPQUEUEFEEDERIDENTIFIERREGISTRY_H
#define MPQUEUEFEEDERIDENTIFIERREGISTRY_H

@class NSMutableArray, NSMapTable;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface MPQueueFeederIdentifierRegistry : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSInteger count;
@property (retain, nonatomic) NSMutableArray *identifierSets; // ivar: _identifierSets
@property (retain, nonatomic) NSMutableArray *identifiers; // ivar: _identifiers
@property (retain, nonatomic) NSMapTable *index; // ivar: _index


+(BOOL)supportsSecureCoding;
-(NSInteger)indexForItem:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)identifierSetAtIndex:(NSInteger)arg0 ;
-(id)identifierSetForItem:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)itemAtIndex:(NSInteger)arg0 ;
-(id)itemForIdentifierSet:(id)arg0 ;
-(void)applyChanges:(id)arg0 identifierSetLookupBlock:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)replaceItemAndIdentifierSet:(id)arg0 atIndex:(NSInteger)arg1 ;


@end


#endif