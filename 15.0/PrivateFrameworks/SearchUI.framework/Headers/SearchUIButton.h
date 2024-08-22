// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUIBUTTON_H
#define SEARCHUIBUTTON_H

@class TLKButton;



@interface SearchUIButton : TLKButton

@property (nonatomic) NSUInteger type; // ivar: _type
@property (nonatomic) BOOL useCompactMode; // ivar: _useCompactMode


-(BOOL)isPlayButton;
-(id)initWithType:(NSUInteger)arg0 ;
-(void)setFixedSize:(struct CGSize )arg0 ;
-(void)updateWithType:(NSUInteger)arg0 ;


@end


#endif