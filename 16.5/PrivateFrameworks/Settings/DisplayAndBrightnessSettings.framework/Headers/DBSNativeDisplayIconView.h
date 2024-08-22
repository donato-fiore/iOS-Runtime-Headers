// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBSNATIVEDISPLAYICONVIEW_H
#define DBSNATIVEDISPLAYICONVIEW_H

@class UIView, UIImageView, UILabel;



@interface DBSNativeDisplayIconView : UIView

@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (nonatomic) BOOL isCurrentDisplayLocation; // ivar: _isCurrentDisplayLocation
@property (retain, nonatomic) UILabel *nameField; // ivar: _nameField


-(id)initWithFrame:(struct CGRect )arg0 displayName:(id)arg1 ;


@end


#endif