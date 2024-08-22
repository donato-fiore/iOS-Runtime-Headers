// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFDOMAINLABEL_H
#define SFDOMAINLABEL_H

@class UIView, UILabel, NSString;



@interface SFDomainLabel : UIView {
    UILabel *_label;
    BOOL _attributedStringNeedsUpdate;
}


@property (readonly, nonatomic, getter=isSecure) BOOL secure; // ivar: _secure
@property (readonly, nonatomic) NSString *text; // ivar: _text


-(id)_makeAttributedString;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithText:(id)arg0 isSecure:(BOOL)arg1 ;
-(void)_commonInit;


@end


#endif