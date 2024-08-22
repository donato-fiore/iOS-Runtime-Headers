// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPMUSICPLAYERSTOREQUEUEDESCRIPTOR_H
#define MPMUSICPLAYERSTOREQUEUEDESCRIPTOR_H

@class NSMutableDictionary, NSDictionary, NSString, NSArray;


#import "MPMusicPlayerQueueDescriptor.h"

@interface MPMusicPlayerStoreQueueDescriptor : MPMusicPlayerQueueDescriptor {
    NSMutableDictionary *_storeFronts;
}


@property (copy, nonatomic) NSDictionary *assetStoreFronts;
@property (copy, nonatomic) NSString *startItemID; // ivar: _startItemID
@property (copy, nonatomic) NSArray *storeIDs; // ivar: _storeIDs


+(BOOL)supportsSecureCoding;
-(BOOL)isEmpty;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStoreIDs:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setEndTime:(CGFloat)arg0 forItemWithStoreID:(id)arg1 ;
-(void)setSourceStorefront:(id)arg0 forItemWithStoreID:(id)arg1 ;
-(void)setStartTime:(CGFloat)arg0 forItemWithStoreID:(id)arg1 ;


@end


#endif