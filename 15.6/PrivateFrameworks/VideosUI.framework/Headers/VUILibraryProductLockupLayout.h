// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUILIBRARYPRODUCTLOCKUPLAYOUT_H
#define VUILIBRARYPRODUCTLOCKUPLAYOUT_H

@class NSString;
@protocol VUILibraryProductLockupViewLayout;

#import <Foundation/Foundation.h>

#import "VUIMediaEntityType.h"

@interface VUILibraryProductLockupLayout : NSObject <VUILibraryProductLockupViewLayout>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) VUIMediaEntityType *entityType; // ivar: _entityType
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger type; // ivar: _type


-(CGFloat)buttonModuleTopMarginForWindowWidth:(CGFloat)arg0 ;
-(CGFloat)contentDescriptionBottomMarginForWindowWidth:(CGFloat)arg0 ;
-(CGFloat)contentDescriptionTopMarginForWindowWidth:(CGFloat)arg0 ;
-(CGFloat)coverArtBottomPadding;
-(CGFloat)coverArtImageRightMarginForWindowWidth:(CGFloat)arg0 ;
-(CGFloat)metadataTopMargin;
-(CGFloat)subtitleTopMarginForWindowWidth:(CGFloat)arg0 ;
-(CGFloat)titleTopMargin;
-(NSInteger)downloadButtonPosition;
-(NSInteger)layoutTypeForWindowWidth:(CGFloat)arg0 ;
-(id)contentDescriptionFontForSizeClass:(NSInteger)arg0 ;
-(id)initWithLayoutType:(NSInteger)arg0 entityType:(id)arg1 ;
-(int)contentDescriptionNumberOfLinesForTraitCollection:(id)arg0 ;
-(struct CGSize )coverArtImageSize;


@end


#endif