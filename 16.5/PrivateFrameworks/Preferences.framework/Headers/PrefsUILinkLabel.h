// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PREFSUILINKLABEL_H
#define PREFSUILINKLABEL_H

@class UILabel, NSURL;



@interface PrefsUILinkLabel : UILabel {
    NSURL *_url;
    BOOL _touchingURL;
}


@property (retain, nonatomic) NSURL *URL; // ivar: _URL
@property (nonatomic) SEL action; // ivar: _action
@property (weak, nonatomic) id *target; // ivar: _target


-(id)color:(id)arg0 byMultiplyingSubComponentsBy:(float)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)openURL:(id)arg0 ;
-(void)tappedLink:(id)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif