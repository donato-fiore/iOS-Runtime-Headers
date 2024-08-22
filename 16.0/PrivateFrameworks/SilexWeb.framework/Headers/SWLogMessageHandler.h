// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SWLOGMESSAGEHANDLER_H
#define SWLOGMESSAGEHANDLER_H

@class NSString;
@protocol SWMessageHandler, SWLogger;

#import <Foundation/Foundation.h>


@interface SWLogMessageHandler : NSObject <SWMessageHandler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SWLogger> *logger; // ivar: _logger
@property (readonly) Class superclass;


-(id)initWithLogger:(id)arg0 ;
-(void)didReceiveMessage:(id)arg0 securityOrigin:(id)arg1 ;


@end


#endif