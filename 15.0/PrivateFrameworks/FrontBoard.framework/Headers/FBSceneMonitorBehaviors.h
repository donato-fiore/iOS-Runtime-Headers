// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FBSCENEMONITORBEHAVIORS_H
#define FBSCENEMONITORBEHAVIORS_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface FBSceneMonitorBehaviors : NSObject <NSCopying>



@property (nonatomic) BOOL monitorsClientSettings; // ivar: _monitorsClientSettings
@property (nonatomic) BOOL monitorsPairingStatus; // ivar: _monitorsPairingStatus
@property (nonatomic) BOOL monitorsSettings; // ivar: _monitorsSettings


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif