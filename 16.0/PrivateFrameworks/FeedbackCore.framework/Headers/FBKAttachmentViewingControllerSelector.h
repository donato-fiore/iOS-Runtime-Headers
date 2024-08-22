// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBKATTACHMENTVIEWINGCONTROLLERSELECTOR_H
#define FBKATTACHMENTVIEWINGCONTROLLERSELECTOR_H


#import <Foundation/Foundation.h>


@interface FBKAttachmentViewingControllerSelector : NSObject



+(BOOL)fallbackToOpaqueViewer;
+(id)_opaqueVCWithItem:(id)arg0 ;
+(id)controllerForAttachment:(id)arg0 ;
+(id)controllerForItem:(id)arg0 ;
+(id)controllerForUrl:(id)arg0 ;
+(id)controllerForUrl:(id)arg0 useFallback:(BOOL)arg1 ;


@end


#endif