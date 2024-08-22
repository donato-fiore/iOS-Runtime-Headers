// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SHEVENTSIGNALLER_H
#define SHEVENTSIGNALLER_H

@class NSString;
@protocol SHEventSignalling;

#import <Foundation/Foundation.h>


@interface SHEventSignaller : NSObject <SHEventSignalling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)proxyConnection;
-(void)sendEventSignal:(id)arg0 ;


@end


#endif