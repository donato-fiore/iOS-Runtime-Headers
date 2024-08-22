// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DTXSERVICE_H
#define DTXSERVICE_H

@class NSString;
@protocol DTXAllowedRPC;

#import <Foundation/Foundation.h>

#import "DTXChannel.h"

@interface DTXService : NSObject <DTXAllowedRPC>



@property (readonly, retain, nonatomic) DTXChannel *channel; // ivar: _channel
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)automaticallyRegistersCapabilities;
+(void)instantiateServiceWithChannel:(id)arg0 ;
+(void)registerCapabilities:(id)arg0 ;
-(id)initWithChannel:(id)arg0 ;
-(void)messageReceived:(id)arg0 ;


@end


#endif