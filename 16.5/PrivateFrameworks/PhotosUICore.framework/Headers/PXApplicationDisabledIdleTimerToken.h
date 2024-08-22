// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXAPPLICATIONDISABLEDIDLETIMERTOKEN_H
#define PXAPPLICATIONDISABLEDIDLETIMERTOKEN_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PXApplicationDisabledIdleTimerToken : NSObject

@property (readonly, nonatomic) unsigned int powerAssertionID; // ivar: _powerAssertionID
@property (readonly, nonatomic) NSString *reason; // ivar: _reason


-(id)description;
-(id)init;
-(id)initWithReason:(id)arg0 powerAssertionID:(unsigned int)arg1 ;


@end


#endif