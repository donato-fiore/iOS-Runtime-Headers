// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC17HOVERTEXTSERVICES27HOVERTEXTSERVICEAXUISERVICE_H
#define _TTC17HOVERTEXTSERVICES27HOVERTEXTSERVICEAXUISERVICE_H

@protocol AXUIClientDelegate;

#import <Foundation/Foundation.h>


@interface _TtC17HoverTextServices27HoverTextServiceAXUIService : NSObject <AXUIClientDelegate>

 {
    ? _client;
}




-(id)init;
-(id)userInterfaceClient:(id)arg0 accessQueueForProcessingMessageWithIdentifier:(NSInteger)arg1 ;
-(void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg0 ;
-(void)dealloc;


@end


#endif