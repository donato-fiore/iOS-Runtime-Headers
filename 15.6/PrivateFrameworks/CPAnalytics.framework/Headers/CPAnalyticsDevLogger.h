// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPANALYTICSDEVLOGGER_H
#define CPANALYTICSDEVLOGGER_H

@class NSString;
@protocol CPAnalyticsDestination;

#import <Foundation/Foundation.h>


@interface CPAnalyticsDevLogger : NSObject <CPAnalyticsDestination>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL disabled;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithConfig:(id)arg0 cpAnalyticsInstance:(id)arg1 ;
-(void)processEvent:(id)arg0 ;
-(void)updateWithConfig:(id)arg0 ;


@end


#endif