// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIACTIVITYRESOURCELOADER_H
#define _UIACTIVITYRESOURCELOADER_H

@protocol OS_dispatch_queue, OS_dispatch_group;

#import <Foundation/Foundation.h>


@interface _UIActivityResourceLoader : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    id *_loadBlock;
    NSObject<OS_dispatch_group> *_group;
    id *_resource;
}




-(id)initWithQueue:(id)arg0 loadBlock:(id)arg1 ;
-(void)_getResourceWithBlock:(id)arg0 ;
-(void)_loadResourceWithBlock:(id)arg0 ;
-(void)getResourceWithBlock:(id)arg0 ;
-(void)loadResourceIfNeeded;


@end


#endif