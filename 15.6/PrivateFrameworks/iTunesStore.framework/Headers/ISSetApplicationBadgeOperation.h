// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ISSETAPPLICATIONBADGEOPERATION_H
#define ISSETAPPLICATIONBADGEOPERATION_H

@class NSString;


#import "ISOperation.h"

@interface ISSetApplicationBadgeOperation : ISOperation

@property (retain) NSString *badgeValue; // ivar: _badgeValue
@property (retain) NSString *bundleIdentifier; // ivar: _bundleIdentifier


-(id)uniqueKey;
-(void)run;


@end


#endif