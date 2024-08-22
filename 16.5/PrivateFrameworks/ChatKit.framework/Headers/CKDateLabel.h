// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDATELABEL_H
#define CKDATELABEL_H

@class UIDateLabel, NSString;



@interface CKDateLabel : UIDateLabel

@property (retain, nonatomic) NSString *textForOverride; // ivar: _textForOverride


-(id)_dateString;
-(id)text;
-(void)setDate:(id)arg0 ;


@end


#endif