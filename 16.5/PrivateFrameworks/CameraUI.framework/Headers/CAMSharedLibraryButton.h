// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMSHAREDLIBRARYBUTTON_H
#define CAMSHAREDLIBRARYBUTTON_H

@class UIImageView, NSString;
@protocol CAMAccessibilityHUDImageProvider;


#import "CAMExpandableMenuButton.h"

@interface CAMSharedLibraryButton : CAMExpandableMenuButton <CAMAccessibilityHUDImageProvider>



@property (readonly, nonatomic) UIImageView *_glyphView; // ivar: __glyphView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger sharedLibraryMode; // ivar: _sharedLibraryMode
@property (readonly) Class superclass;


-(NSInteger)_indexForSharedLibraryMode:(NSInteger)arg0 ;
-(NSInteger)numberOfMenuItems;
-(id)headerView;
-(id)imageForAccessibilityHUD;
-(id)initWithLayoutStyle:(NSInteger)arg0 ;
-(void)_updateImageForCurrentState;


@end


#endif