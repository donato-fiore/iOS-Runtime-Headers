// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUISHAREURLACTIVITYITEM_H
#define VUISHAREURLACTIVITYITEM_H

@class NSItemProvider, NSString, NSURL;
@protocol UIActivityItemSource, UIActivityItemLinkPresentationSource;

#import <Foundation/Foundation.h>


@interface VUIShareURLActivityItem : NSObject <UIActivityItemSource, UIActivityItemLinkPresentationSource>

 {
    NSItemProvider *_itemProvider;
    NSString *_title;
    NSString *_subtitle;
    NSURL *_imageURL;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSURL *shareURL; // ivar: _shareURL
@property (readonly) Class superclass;


-(id)activityViewController:(id)arg0 itemForActivityType:(id)arg1 ;
-(id)activityViewControllerLinkPresentationMetadata:(id)arg0 ;
-(id)activityViewControllerPlaceholderItem:(id)arg0 ;
-(id)initWithURL:(id)arg0 title:(id)arg1 subtitle:(id)arg2 imageURL:(id)arg3 ;


@end


#endif