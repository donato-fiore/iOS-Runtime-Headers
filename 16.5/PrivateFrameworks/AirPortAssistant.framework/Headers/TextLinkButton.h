// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TEXTLINKBUTTON_H
#define TEXTLINKBUTTON_H

@class UIButton, NSString;
@protocol TextLinkButtonDelegate;



@interface TextLinkButton : UIButton

@property (nonatomic) NSObject<TextLinkButtonDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSString *urlString; // ivar: _urlString


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)dealloc;
-(void)tapAction:(id)arg0 ;


@end


#endif