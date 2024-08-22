// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKPILLVIEW_H
#define NTKPILLVIEW_H

@class UIView, NSArray;



@interface NTKPillView : UIView

@property (nonatomic) NSUInteger colorLimitCount; // ivar: _colorLimitCount
@property (copy, nonatomic) NSArray *pillColors; // ivar: _pillColors


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;


@end


#endif