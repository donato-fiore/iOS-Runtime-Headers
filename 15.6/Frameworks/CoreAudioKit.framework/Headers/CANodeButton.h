// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CANODEBUTTON_H
#define CANODEBUTTON_H

@class UIButton, NSURL;



@interface CANodeButton : UIButton {
    BOOL hasLabel;
}


@property BOOL hasLabel;
@property (retain) NSURL *url; // ivar: _url


-(id)init;
-(void)dealloc;
-(void)layoutSubviews;


@end


#endif