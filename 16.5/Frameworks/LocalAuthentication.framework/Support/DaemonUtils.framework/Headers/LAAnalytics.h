// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LAANALYTICS_H
#define LAANALYTICS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface LAAnalytics : NSObject

@property (readonly, nonatomic) NSString *eventName; // ivar: _eventName


-(BOOL)_shouldSendAnalytics;
-(id)buildPayload;
-(id)initWithEventName:(id)arg0 ;
-(void)send;


@end


#endif