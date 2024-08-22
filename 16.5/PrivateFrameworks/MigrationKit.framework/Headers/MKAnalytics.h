// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKANALYTICS_H
#define MKANALYTICS_H


#import <Foundation/Foundation.h>

#import "MKPayload.h"

@interface MKAnalytics : NSObject

@property (retain, nonatomic) MKPayload *payload; // ivar: _payload


+(id)sharedInstance;
-(id)init;
-(void)createPayload;
-(void)reset;
-(void)send;
-(void)send:(id)arg0 payload:(id)arg1 ;


@end


#endif