// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LIVEFSVALIDATIONSERVICESOURCE_H
#define LIVEFSVALIDATIONSERVICESOURCE_H

@class NSString, NSOperationQueue, NSHashTable;
@protocol NSXPCListenerDelegate, NSFileProviderValidationServiceV1, NSFileProviderServiceSource;

#import <Foundation/Foundation.h>

#import "LiveFSFPExtensionHelper.h"

@interface LiveFSValidationServiceSource : NSObject <NSXPCListenerDelegate, NSFileProviderValidationServiceV1, NSFileProviderServiceSource>

 {
    LiveFSFPExtensionHelper *_fileProviderExtension;
    NSString *_itemIdentifier;
    NSOperationQueue *_operationQueue;
    NSHashTable *_listeners;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isRestricted) BOOL restricted;
@property (readonly, copy, nonatomic) NSString *serviceName;
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)initWithFileProviderExtension:(id)arg0 itemIdentifier:(id)arg1 ;
-(id)makeListenerEndpointAndReturnError:(*id)arg0 ;
-(void)validation_allowValidation:(id)arg0 ;
-(void)validation_evictDocumentWithCompletionHandler:(id)arg0 ;
-(void)validation_shareDocumentWithCompletionHandler:(id)arg0 ;


@end


#endif