// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PRXLABEL_H
#define PRXLABEL_H

@class UILabel, NSAttributedString, NSString;
@protocol PRXTextContainer;



@interface PRXLabel : UILabel <PRXTextContainer>



@property (copy, nonatomic) NSAttributedString *attributedText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger style; // ivar: _style
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text;


+(id)labelWithStyle:(NSInteger)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 ;


@end


#endif