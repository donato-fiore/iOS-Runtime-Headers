// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BLTBULLETINDISTRIBUTORBULLETINUPDATE_H
#define BLTBULLETINDISTRIBUTORBULLETINUPDATE_H

@class BBBulletin;

#import <Foundation/Foundation.h>


@interface BLTBulletinDistributorBulletinUpdate : NSObject

@property (retain, nonatomic) BBBulletin *bulletin; // ivar: _bulletin
@property (nonatomic) NSUInteger feed; // ivar: _feed
@property (nonatomic) NSUInteger updateType; // ivar: _updateType


+(id)bulletinUpdateWithType:(NSUInteger)arg0 bulletin:(id)arg1 feed:(NSUInteger)arg2 ;


@end


#endif