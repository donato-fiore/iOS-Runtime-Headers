// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NOTEDATELABEL_H
#define NOTEDATELABEL_H

@class UILabel, NSDate;



@interface NoteDateLabel : UILabel {
    NSDate *_date;
}




-(BOOL)_accessibilityIsSpeakThisElement;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)setDate:(id)arg0 ;
-(void)updateDateLabel;


@end


#endif