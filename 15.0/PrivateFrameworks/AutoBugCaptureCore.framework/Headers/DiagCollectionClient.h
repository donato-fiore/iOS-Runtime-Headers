// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DIAGCOLLECTIONCLIENT_H
#define DIAGCOLLECTIONCLIENT_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DiagCollectionClient : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *destinationDirectory;
}




-(id)init;
-(id)initWithDestinationDirectory:(id)arg0 ;
-(id)setupXPCInterface;
-(unsigned int)currentLoginUserID;
-(void)collectDEPayloadsWithIdentifier:(id)arg0 diagnosticExtensionsWithParameters:(id)arg1 queue:(id)arg2 reply:(id)arg3 ;
-(void)moveDiagnosticFilesToDestination:(id)arg0 reply:(id)arg1 ;


@end


#endif