// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBFPOSTEREDITINGINGESTIONMANAGER_H
#define PBFPOSTEREDITINGINGESTIONMANAGER_H

@class PREditingSceneViewController;
@protocol PBFPosterEditingIngestionManagerDelegate;

#import <Foundation/Foundation.h>


@interface PBFPosterEditingIngestionManager : NSObject {
    ? posterStore;
    ? editingConfirmationViewController;
    ? ingestedConfiguration;
}


@property (nonatomic, weak) NSObject<PBFPosterEditingIngestionManagerDelegate> *delegate; // ivar: delegate
@property (nonatomic, readonly) PREditingSceneViewController *editingViewController;


-(id)ingestConfiguration:(id)arg0 updatedConfiguredProperties:(id)arg1 andPresentPosterEditingConfirmationForEditor:(id)arg2 galleryViewController:(id)arg3 traitCollection:(id)arg4 ;
-(id)init;
-(void)dismissViewController;


@end


#endif