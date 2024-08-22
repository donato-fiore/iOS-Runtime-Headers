// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEIKEV2REQUESTCONTEXT_H
#define NEIKEV2REQUESTCONTEXT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface NEIKEv2RequestContext : NSObject

@property (nonatomic) unsigned int powerAssertionID; // ivar: _powerAssertionID
@property (retain, nonatomic) NSString *powerAssertionName; // ivar: _powerAssertionName
@property (nonatomic) BOOL preventSleepUntilFinished; // ivar: _preventSleepUntilFinished
@property (nonatomic) BOOL requestInitiator; // ivar: _requestInitiator
@property (nonatomic) int requestType; // ivar: _requestType


-(id)description;
-(id)initWithRequestType:(int)arg0 ;
-(void)dealloc;
-(void)releasePowerAssertionIfNeeded;
-(void)sendCallbackSuccess:(BOOL)arg0 session:(id)arg1 ;
-(void)takePowerAssertionIfNeededWithSession:(id)arg0 ;


@end


#endif