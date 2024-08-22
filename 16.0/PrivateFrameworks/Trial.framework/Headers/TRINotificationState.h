// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRINOTIFICATIONSTATE_H
#define TRINOTIFICATIONSTATE_H

@class NSString;
@protocol TRINotificationToken;

#import <Foundation/Foundation.h>


@interface TRINotificationState : NSObject <TRINotificationToken>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) int token; // ivar: _token


-(id)initWithToken:(int)arg0 ;


@end


#endif