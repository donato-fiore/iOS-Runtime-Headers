// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IKJSINSPECTORSTORAGEAGENT_H
#define IKJSINSPECTORSTORAGEAGENT_H

@class NSString;
@protocol RWIProtocolDOMStorageDomainHandler;

#import <Foundation/Foundation.h>

#import "IKJSInspectorController.h"

@interface IKJSInspectorStorageAgent : NSObject <RWIProtocolDOMStorageDomainHandler>



@property (readonly, weak, nonatomic) IKJSInspectorController *controller; // ivar: _controller
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_storageForStorageId:(id)arg0 ;
-(id)_storageIdForStorage:(id)arg0 ;
-(id)initWithInspectorController:(id)arg0 ;
-(void)_itemAdded:(id)arg0 ;
-(void)_itemRemoved:(id)arg0 ;
-(void)_itemUpdated:(id)arg0 ;
-(void)_itemsCleared:(id)arg0 ;
-(void)dealloc;
// -(void)disableWithErrorCallback:(id)arg0 successCallback:(unk)arg1  ;
// -(void)enableWithErrorCallback:(id)arg0 successCallback:(unk)arg1  ;
// -(void)getDOMStorageItemsWithErrorCallback:(id)arg0 successCallback:(unk)arg1 storageId:(id)arg2  ;
// -(void)removeDOMStorageItemWithErrorCallback:(id)arg0 successCallback:(unk)arg1 storageId:(id)arg2 key:(unk)arg3  ;
// -(void)setDOMStorageItemWithErrorCallback:(id)arg0 successCallback:(unk)arg1 storageId:(id)arg2 key:(unk)arg3 value:(id)arg4  ;
-(void)startListeningForStorageNotifications;
-(void)stopListeningForStorageNotifications;


@end


#endif