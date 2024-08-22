// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKGREENFIELDCOMPANIONACTIVITYITEMPROVIDER_H
#define NTKGREENFIELDCOMPANIONACTIVITYITEMPROVIDER_H

@class UIActivityItemProvider, NSURL, UIImage;
@protocol NTKGreenfieldCompanionActivityItemProviderDelegate;


#import "NTKGreenfieldDraftRecipe.h"
#import "NTKGreenfieldEncodedRecipe.h"

@interface NTKGreenfieldCompanionActivityItemProvider : UIActivityItemProvider {
    NTKGreenfieldDraftRecipe *_draftRecipe;
    NTKGreenfieldEncodedRecipe *_encodedRecipe;
    NSURL *_emailImageUrl;
    UIImage *_previewImage;
}


@property (weak, nonatomic) NSObject<NTKGreenfieldCompanionActivityItemProviderDelegate> *delegate; // ivar: _delegate


-(id)activityViewController:(id)arg0 itemsForActivityType:(id)arg1 ;
-(id)activityViewController:(id)arg0 subjectForActivityType:(id)arg1 ;
-(id)activityViewControllerLinkPresentationMetadata:(id)arg0 ;
-(id)initWithDraftRecipe:(id)arg0 previewImage:(id)arg1 ;
-(id)item;
-(id)writeImageToDisk:(id)arg0 suffix:(id)arg1 ;


@end


#endif