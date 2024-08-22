// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVVCALERTINFORMATION_H
#define AVVCALERTINFORMATION_H


#import <Foundation/Foundation.h>


@interface AVVCAlertInformation : NSObject

@property (nonatomic) NSUInteger alertEndTime; // ivar: _alertEndTime
@property (nonatomic) NSInteger mode; // ivar: _mode
@property (nonatomic) int type; // ivar: _type


-(id)initWithAlertType:(int)arg0 mode:(NSInteger)arg1 endTime:(NSUInteger)arg2 ;


@end


#endif