// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SEARCHUIRESPONSEWRAPPERCARDSECTIONVIEW_H
#define SEARCHUIRESPONSEWRAPPERCARDSECTIONVIEW_H

@class NSString;
@protocol VRXInteractionDelegate;


#import "SearchUICardSectionView.h"

@interface SearchUIResponseWrapperCardSectionView : SearchUICardSectionView <VRXInteractionDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)setupContentView;
-(void)informHostOfViewResize:(struct CGSize )arg0 ;
-(void)navigateWithResponseData:(id)arg0 ;
-(void)performSFCommand:(id)arg0 ;


@end


#endif