// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTATTRIBUTECOLLECTIONVIEWCELL_H
#define AVTATTRIBUTECOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UIView, NSString;
@protocol AVTDiscardableContent;


#import "AVTAttributeValueView.h"

@interface AVTAttributeCollectionViewCell : UICollectionViewCell <AVTDiscardableContent>



@property (retain, nonatomic) UIView *attributeView; // ivar: _attributeView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *discardableContentHandler; // ivar: discardableContentHandler
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) AVTAttributeValueView *valueView;


+(id)cellIdentifier;
-(struct CGRect )frameForAttributeView;
-(void)discardContent;
-(void)prepareForReuse;


@end


#endif