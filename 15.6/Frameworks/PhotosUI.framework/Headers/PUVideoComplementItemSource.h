// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUVIDEOCOMPLEMENTITEMSOURCE_H
#define PUVIDEOCOMPLEMENTITEMSOURCE_H

@class NSURL, PFVideoComplement, NSString;
@protocol UIActivityItemSource;

#import <Foundation/Foundation.h>


@interface PUVideoComplementItemSource : NSObject <UIActivityItemSource>

 {
    NSURL *_bundleURL;
    PFVideoComplement *_videoComplement;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_initWithVideoComplement:(id)arg0 bundleAtURL:(id)arg1 ;
-(id)activityViewController:(id)arg0 dataTypeIdentifierForActivityType:(id)arg1 ;
-(id)activityViewController:(id)arg0 itemForActivityType:(id)arg1 ;
-(id)activityViewController:(id)arg0 thumbnailImageForActivityType:(id)arg1 suggestedSize:(struct CGSize )arg2 ;
-(id)activityViewControllerPlaceholderItem:(id)arg0 ;
-(id)activityViewControllerSubject:(id)arg0 ;
-(id)initWithVideoComplement:(id)arg0 ;
-(id)initWithVideoComplementBundleAtURL:(id)arg0 ;


@end


#endif