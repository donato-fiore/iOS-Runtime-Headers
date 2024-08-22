// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUBADGEINFOPROMISE_H
#define PUBADGEINFOPROMISE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PUBadgeInfoPromise : NSObject <NSCopying>

 {
    id *_countProvider;
}


@property (readonly, nonatomic) PXAssetBadgeInfo badgeInfo; // ivar: _badgeInfo


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)badgeInfoPromiseWithAdjustedBadges:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBadgeInfo:(struct PXAssetBadgeInfo )arg0 ;
-(id)initWithBadgeInfo:(struct PXAssetBadgeInfo )arg0 countProvider:(id)arg1 ;


@end


#endif