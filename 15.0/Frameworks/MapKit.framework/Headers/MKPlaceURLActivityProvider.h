// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKPLACEURLACTIVITYPROVIDER_H
#define MKPLACEURLACTIVITYPROVIDER_H

@class NSString;
@protocol UIActivityItemSource, UIActivityItemSocialSource;


#import "MKPlaceActivityProvider.h"

@interface MKPlaceURLActivityProvider : MKPlaceActivityProvider <UIActivityItemSource, UIActivityItemSocialSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)activityViewController:(id)arg0 attachmentULRTypeForActivityType:(id)arg1 ;
-(id)activityViewController:(id)arg0 itemForActivityType:(id)arg1 ;
-(id)activityViewController:(id)arg0 subjectForActivityType:(id)arg1 ;
-(id)activityViewController:(id)arg0 thumbnailForActivityType:(id)arg1 ;
-(id)activityViewController:(id)arg0 thumbnailImageForActivityType:(id)arg1 suggestedSize:(struct CGSize )arg2 ;
-(id)activityViewControllerPlaceholderItem:(id)arg0 ;


@end


#endif