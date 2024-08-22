// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIDOCUMENTUICONFIGURATIONPOPOVER_H
#define VUIDOCUMENTUICONFIGURATIONPOPOVER_H

@class UIBarButtonItem, UIView;


#import "VUIDocumentUIConfigurationModal.h"

@interface VUIDocumentUIConfigurationPopover : VUIDocumentUIConfigurationModal

@property (nonatomic) NSUInteger popOverArrowDirection; // ivar: _popOverArrowDirection
@property (retain, nonatomic) UIBarButtonItem *popOverSourceBarButtonItem; // ivar: _popOverSourceBarButtonItem
@property (nonatomic) CGSize preferredSize; // ivar: _preferredSize
@property (nonatomic, getter=isPresentationAdjustedToSizeClass) BOOL presentationAdjustedToSizeClass; // ivar: _presentationAdjustedToSizeClass
@property (nonatomic) CGRect sourceRect; // ivar: _sourceRect
@property (retain, nonatomic) UIView *sourceView; // ivar: _sourceView




@end


#endif