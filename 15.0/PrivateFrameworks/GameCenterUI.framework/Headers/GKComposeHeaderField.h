// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKCOMPOSEHEADERFIELD_H
#define GKCOMPOSEHEADERFIELD_H



#import "GKBaseComposeHeaderField.h"
#import "GKLabel.h"

@interface GKComposeHeaderField : GKBaseComposeHeaderField

@property (retain, nonatomic) GKLabel *valueLabel; // ivar: _valueLabel


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)valueText;
-(struct CGRect )valueFrame;
-(void)setMaxLineCount:(NSUInteger)arg0 ;
-(void)setValueText:(id)arg0 ;


@end


#endif