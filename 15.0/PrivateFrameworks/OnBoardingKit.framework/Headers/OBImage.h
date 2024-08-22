// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OBIMAGE_H
#define OBIMAGE_H

@class UIImage, NSBundle, NSString, UIColor;



@interface OBImage : UIImage

@property (retain, nonatomic) NSBundle *bundle; // ivar: _bundle
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSInteger style; // ivar: _style
@property (retain, nonatomic) UIColor *tintColor; // ivar: _tintColor


+(NSInteger)rootInterfaceStyle;
+(id)_imageNameForUIInterfaceStyle:(NSInteger)arg0 originalName:(id)arg1 ;
+(id)_imageNamed:(id)arg0 inBundle:(id)arg1 convertToMatchInterfaceStyle:(BOOL)arg2 ;
+(id)imageNamed:(id)arg0 ;
+(id)imageNamed:(id)arg0 inBundle:(id)arg1 ;
-(id)_flatImageWithColor:(id)arg0 ;
-(id)_obFlatImageWithColor:(id)arg0 ;
-(id)imageForUserInterfaceStyle:(NSInteger)arg0 ;


@end


#endif