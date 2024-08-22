// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSAINBOXDETAILVIEWCONTROLLERPROVIDER_H
#define PXSAINBOXDETAILVIEWCONTROLLERPROVIDER_H

@class NSString;
@protocol PXInboxModelDetailViewControllerProvider;

#import <Foundation/Foundation.h>


@interface PXSAInboxDetailViewControllerProvider : NSObject <PXInboxModelDetailViewControllerProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)presentationTypeForInboxModel:(id)arg0 ;
-(id)_sharedAlbumViewControllerForSectionInfo:(id)arg0 fromViewController:(id)arg1 ;
-(id)viewControllerForInboxModel:(id)arg0 fromViewController:(id)arg1 ;
-(void)navigateToInboxModel:(id)arg0 inSharedAlbumActivityFeedViewController:(id)arg1 ;


@end


#endif