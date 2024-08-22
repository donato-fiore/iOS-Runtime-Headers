// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIACTIVITYITEMMAPPING_H
#define _UIACTIVITYITEMMAPPING_H


#import <Foundation/Foundation.h>


@interface _UIActivityItemMapping : NSObject



+(id)_activeActivityViewControllers;
+(id)_activityViewControllerForActivityItem:(id)arg0 ;
+(id)_attachmentNameForActivityItem:(id)arg0 activityType:(id)arg1 ;
+(id)_dataTypeIdentifierForActivityItem:(id)arg0 activityType:(id)arg1 ;
+(id)_itemProviderForActivityItem:(id)arg0 typeIdentifier:(id)arg1 thumbnailSize:(struct CGSize )arg2 activityType:(id)arg3 ;
+(id)_openURLAnnotationForActivityItem:(id)arg0 activityType:(id)arg1 ;
+(id)_subjectForActivityItem:(id)arg0 activityType:(id)arg1 ;
+(id)_thumbnailImageDataForActivityItem:(id)arg0 thumbnailSize:(struct CGSize )arg1 activityType:(id)arg2 ;
+(id)_thumbnailImageForActivityItem:(id)arg0 thumbnailSize:(struct CGSize )arg1 activityType:(id)arg2 ;
+(void)_addActivityItem:(id)arg0 activityViewController:(id)arg1 originalActivityItem:(id)arg2 ;
+(void)_addToActiveActivityViewControllers:(id)arg0 ;
+(void)_clearActivityItems:(id)arg0 ;
+(void)_removeFromActiveActivityViewControllers:(id)arg0 ;


@end


#endif