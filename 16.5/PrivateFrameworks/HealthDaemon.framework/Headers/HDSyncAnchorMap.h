// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSYNCANCHORMAP_H
#define HDSYNCANCHORMAP_H

@class NSMutableDictionary, NSString;
@protocol HDSyncAnchorMap, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface HDSyncAnchorMap : NSObject <HDSyncAnchorMap, NSSecureCoding, NSCopying>

 {
    NSMutableDictionary *_anchorsByEntityIdentifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)syncAnchorMapWithCodableSyncAnchorRangeMap:(id)arg0 ;
+(id)syncAnchorMapWithDictionary:(id)arg0 ;
+(id)syncAnchorMapWithSyncAnchorRangeMap:(id)arg0 ;
-(BOOL)isAllZero;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)anchorForSyncEntityClass:(Class)arg0 ;
-(NSInteger)anchorForSyncEntityIdentifier:(id)arg0 ;
-(NSUInteger)anchorCount;
-(id)anchorIfPresentForSyncEntityIdentifier:(id)arg0 ;
-(id)codableSyncAnchorRangeMap;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateAnchorsAndEntityIdentifiersWithBlock:(id)arg0 ;
-(void)setAnchor:(NSInteger)arg0 forSyncEntity:(Class)arg1 ;
-(void)setAnchor:(NSInteger)arg0 forSyncEntityIdentifier:(id)arg1 ;
-(void)setAnchorsFromMap:(id)arg0 ;


@end


#endif