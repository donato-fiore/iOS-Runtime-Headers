// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKTEXTFIELD_H
#define GKTEXTFIELD_H

@class UITextField, GKTextStyle, NSString;
@protocol GKTextStyleReplay;



@interface GKTextField : UITextField <GKTextStyleReplay>

 {
    GKTextStyle *_baseStyle;
}


@property (retain, nonatomic) GKTextStyle *appliedStyle; // ivar: _appliedStyle
@property (retain, nonatomic) GKTextStyle *baseStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)initialize;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)applyTextStyle:(id)arg0 ;
-(void)replayAndApplyStyleWithSystemContentChange:(BOOL)arg0 ;


@end


#endif