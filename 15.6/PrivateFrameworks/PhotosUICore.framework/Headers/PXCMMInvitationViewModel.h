// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCMMINVITATIONVIEWMODEL_H
#define PXCMMINVITATIONVIEWMODEL_H

@class NSAttributedString, UIColor, NSString;
@protocol PXDisplayAsset, PXUIImageProvider;


#import "PXObservable.h"

@interface PXCMMInvitationViewModel : PXObservable

@property (readonly, copy, nonatomic) NSAttributedString *attributedSubtitle1; // ivar: _attributedSubtitle1
@property (readonly, copy, nonatomic) NSAttributedString *attributedSubtitle2; // ivar: _attributedSubtitle2
@property (readonly, copy, nonatomic) NSAttributedString *attributedTitle; // ivar: _attributedTitle
@property (readonly, nonatomic, getter=isHighlighted) BOOL highlighted; // ivar: _highlighted
@property (readonly, nonatomic) UIColor *opaqueAncestorBackgroundColor; // ivar: _opaqueAncestorBackgroundColor
@property (readonly, copy, nonatomic) NSObject<PXDisplayAsset> *posterAsset; // ivar: _posterAsset
@property (readonly, copy, nonatomic) NSObject<PXUIImageProvider> *posterMediaProvider; // ivar: _posterMediaProvider
@property (readonly, copy, nonatomic) NSString *posterSubtitle; // ivar: _posterSubtitle
@property (readonly, copy, nonatomic) NSString *posterTitle; // ivar: _posterTitle
@property (readonly, nonatomic, getter=isSelected) BOOL selected; // ivar: _selected


-(id)init;
-(void)performChanges:(id)arg0 ;


@end


#endif