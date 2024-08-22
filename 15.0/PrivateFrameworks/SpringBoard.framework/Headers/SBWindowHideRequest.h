// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBWINDOWHIDEREQUEST_H
#define SBWINDOWHIDEREQUEST_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SBWindowHideRequest : NSObject

@property (copy) NSString *reason; // ivar: _reason
@property SBWindowLevelRange_struct windowLevelRange; // ivar: _windowLevelRange


+(id)hideRequestWithWindowLevelRange:(struct SBWindowLevelRange_struct )arg0 reason:(id)arg1 ;
-(id)description;


@end


#endif