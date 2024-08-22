// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICATTACHMENTBRICKLABELV2_H
#define ICATTACHMENTBRICKLABELV2_H

@class UILabel, UIColor, NSAttributedString, NSString;



@interface ICAttachmentBrickLabelV2 : UILabel

@property (retain, nonatomic) UIColor *defaultTextColor; // ivar: _defaultTextColor
@property (nonatomic) BOOL disableVibrancy; // ivar: _disableVibrancy
@property (copy, nonatomic) NSAttributedString *ic_attributedStringValue;
@property (copy, nonatomic) NSString *ic_stringValue;
@property (nonatomic) BOOL vibrant; // ivar: _vibrant


-(BOOL)allowsVibrancy;
-(id)text;
-(void)setText:(id)arg0 ;
-(void)setTextColor:(id)arg0 ;


@end


#endif