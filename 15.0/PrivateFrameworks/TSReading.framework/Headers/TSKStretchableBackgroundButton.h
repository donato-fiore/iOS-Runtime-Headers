// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSKSTRETCHABLEBACKGROUNDBUTTON_H
#define TSKSTRETCHABLEBACKGROUNDBUTTON_H

@class UIButton;



@interface TSKStretchableBackgroundButton : UIButton

@property (nonatomic) NSInteger backgroundLeftCapWidth; // ivar: mBackgroundLeftCapWidth
@property (nonatomic) NSInteger backgroundTopCapHeight; // ivar: mBackgroundTopCapHeight


-(void)awakeFromNib;
-(void)guessBackgroundTopLeftCapSize;
-(void)p_resetBackgroundImage;
-(void)p_resetBackgroundImageForState:(NSUInteger)arg0 ;
-(void)setBackgroundImage:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)setBackgroundTopLeftCapHeight:(NSInteger)arg0 width:(NSInteger)arg1 ;


@end


#endif