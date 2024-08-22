// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXLOCALIZATIONCAPTIONSERVICE_H
#define AXLOCALIZATIONCAPTIONSERVICE_H

@class AXUIClient, NSString;
@protocol AXUIClientDelegate;

#import <Foundation/Foundation.h>


@interface AXLocalizationCaptionService : NSObject <AXUIClientDelegate>



@property (retain, nonatomic) AXUIClient *client; // ivar: _client
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)service;
+(void)_sendMessage:(id)arg0 withIdentifier:(NSUInteger)arg1 errorHandler:(id)arg2 ;
+(void)startService;
+(void)stopService;
-(void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg0 ;


@end


#endif