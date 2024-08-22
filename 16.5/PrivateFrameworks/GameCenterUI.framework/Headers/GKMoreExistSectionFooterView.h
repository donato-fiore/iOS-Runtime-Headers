// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKMOREEXISTSECTIONFOOTERVIEW_H
#define GKMOREEXISTSECTIONFOOTERVIEW_H

@class UICollectionReusableView, NSString;


#import "GKLabel.h"

@interface GKMoreExistSectionFooterView : UICollectionReusableView

@property (retain, nonatomic) GKLabel *label; // ivar: _label
@property (retain, nonatomic) NSString *text;


+(BOOL)requiresConstraintBasedLayout;
+(CGFloat)defaultHeight;
-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif