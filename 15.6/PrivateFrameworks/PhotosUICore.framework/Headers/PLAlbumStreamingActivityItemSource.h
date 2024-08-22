// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLALBUMSTREAMINGACTIVITYITEMSOURCE_H
#define PLALBUMSTREAMINGACTIVITYITEMSOURCE_H

@class PLCloudSharedAlbum, NSString;
@protocol UIActivityItemsSource, UIActivityItemSocialSource, UIActivityItemSubjectSource;

#import <Foundation/Foundation.h>


@interface PLAlbumStreamingActivityItemSource : NSObject <UIActivityItemsSource, UIActivityItemSocialSource, UIActivityItemSubjectSource>

 {
    PLCloudSharedAlbum *_album;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)activityViewController:(id)arg0 itemsForActivityType:(id)arg1 ;
-(id)activityViewController:(id)arg0 thumbnailForActivityType:(id)arg1 ;
-(id)activityViewControllerPlaceholderItems:(id)arg0 ;
-(id)activityViewControllerSubject:(id)arg0 ;
-(id)initWithAlbum:(id)arg0 ;


@end


#endif