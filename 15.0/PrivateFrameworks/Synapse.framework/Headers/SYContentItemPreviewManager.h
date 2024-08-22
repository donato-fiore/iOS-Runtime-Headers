// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SYCONTENTITEMPREVIEWMANAGER_H
#define SYCONTENTITEMPREVIEWMANAGER_H


#import <Foundation/Foundation.h>


@interface SYContentItemPreviewManager : NSObject



+(void)_loadPreviewForAppContentItem:(id)arg0 completion:(id)arg1 ;
+(void)_loadPreviewMetadataForItem:(id)arg0 fullDetail:(BOOL)arg1 completion:(id)arg2 ;
+(void)_loadPreviewUsingLPForItem:(id)arg0 fullDetail:(BOOL)arg1 completion:(id)arg2 ;
+(void)loadPreviewDataForItems:(id)arg0 fullDetail:(BOOL)arg1 ;


@end


#endif