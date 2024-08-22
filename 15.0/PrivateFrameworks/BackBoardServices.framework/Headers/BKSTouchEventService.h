// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BKSTOUCHEVENTSERVICE_H
#define BKSTOUCHEVENTSERVICE_H


#import <Foundation/Foundation.h>


@interface BKSTouchEventService : NSObject



+(id)sharedInstance;
-(id)addAuthenticationSpecifications:(id)arg0 forReason:(id)arg1 ;
-(void)addTouchAuthenticationSpecifications:(id)arg0 forReason:(id)arg1 ;


@end


#endif