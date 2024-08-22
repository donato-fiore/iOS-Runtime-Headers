// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RWIPROTOCOLDOMSTORAGEDOMAINEVENTDISPATCHER_H
#define RWIPROTOCOLDOMSTORAGEDOMAINEVENTDISPATCHER_H


#import <Foundation/Foundation.h>


@interface RWIProtocolDOMStorageDomainEventDispatcher : NSObject {
    *AugmentableInspectorController _controller;
}




-(id)initWithController:(struct AugmentableInspectorController *)arg0 ;
-(void)domStorageItemAddedWithStorageId:(id)arg0 key:(id)arg1 newValue:(id)arg2 ;
-(void)domStorageItemRemovedWithStorageId:(id)arg0 key:(id)arg1 ;
-(void)domStorageItemUpdatedWithStorageId:(id)arg0 key:(id)arg1 oldValue:(id)arg2 newValue:(id)arg3 ;
-(void)domStorageItemsClearedWithStorageId:(id)arg0 ;


@end


#endif