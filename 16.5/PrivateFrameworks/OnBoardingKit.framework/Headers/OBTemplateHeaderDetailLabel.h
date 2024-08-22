// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OBTEMPLATEHEADERDETAILLABEL_H
#define OBTEMPLATEHEADERDETAILLABEL_H



#import "OBTemplateLabel.h"

@interface OBTemplateHeaderDetailLabel : OBTemplateLabel

@property (nonatomic) _NSRange bodyRange; // ivar: _bodyRange
@property (nonatomic) _NSRange titleRange; // ivar: _titleRange


-(void)setDetailedTextHeader:(id)arg0 detailedTextBody:(id)arg1 ;
-(void)updateTextAlignment;


@end


#endif