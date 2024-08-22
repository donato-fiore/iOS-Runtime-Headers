// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIMENUELEMENT_H
#define UIMENUELEMENT_H

@class NSString;
@protocol NSCopying, NSSecureCoding, _UIMenuImageOrName;

#import <Foundation/Foundation.h>

#import "UIImage.h"

@interface UIMenuElement : NSObject <NSCopying, NSSecureCoding>

 {
    NSString *_accessibilityIdentifier;
}


@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) NSObject<_UIMenuImageOrName> *imageOrName; // ivar: _imageOrName
@property (readonly, nonatomic) BOOL isLeaf;
@property (readonly, nonatomic) BOOL isLoadingPlaceholder;
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
// -(BOOL)_acceptBoolMenuVisit:(id)arg0 commandVisit:(unk)arg1 actionVisit:(id)arg2  ;
// -(BOOL)_acceptBoolMenuVisit:(id)arg0 leafVisit:(unk)arg1  ;
-(BOOL)_canBeHighlighted;
-(BOOL)_isInlineGroup;
-(BOOL)_isVisible;
-(id)_customContentView;
-(id)_immutableCopy;
-(id)_mutableCopy;
-(id)accessibilityIdentifier;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitle:(id)arg0 image:(id)arg1 imageName:(id)arg2 ;
// -(void)_acceptMenuVisit:(id)arg0 commandVisit:(unk)arg1 actionVisit:(id)arg2 deferredElementVisit:(unk)arg3  ;
// -(void)_acceptMenuVisit:(id)arg0 leafVisit:(unk)arg1  ;
-(void)_willBePreparedForInitialDisplay:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setAccessibilityIdentifier:(id)arg0 ;


@end


#endif