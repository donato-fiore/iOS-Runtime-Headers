// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKGREENFIELDCOMPANIONACTIVITYVIEWCONTROLLER_H
#define NTKGREENFIELDCOMPANIONACTIVITYVIEWCONTROLLER_H

@class UIActivityViewController, NSString;
@protocol UIActivityViewControllerObjectManipulationDelegate, NTKGreenfieldCompanionActivityItemProviderDelegate;


#import "NTKGreenfieldDraftRecipe.h"

@interface NTKGreenfieldCompanionActivityViewController : UIActivityViewController <UIActivityViewControllerObjectManipulationDelegate, NTKGreenfieldCompanionActivityItemProviderDelegate>

 {
    NTKGreenfieldDraftRecipe *_draftRecipe;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_customizationGroupsForActivityViewController:(id)arg0 ;
-(id)initWithDraftRecipe:(id)arg0 previewImage:(id)arg1 ;
-(void)_handleCustomizationValueChange:(id)arg0 sharingOption:(id)arg1 ;
-(void)companionActivityItemProvider:(id)arg0 handleError:(id)arg1 ;


@end


#endif