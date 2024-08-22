// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RUICHOICE_H
#define RUICHOICE_H

@class UIColor, NSString;


#import "RUIElement.h"

@interface RUIChoice : RUIElement

@property (readonly, nonatomic) NSUInteger choiceType; // ivar: _choiceType
@property (readonly, nonatomic) UIColor *tintColor; // ivar: _tintColor
@property (readonly, nonatomic) NSString *title; // ivar: _title


-(NSUInteger)typeForChoiceString:(id)arg0 ;
-(id)initWithAttributes:(id)arg0 parent:(id)arg1 ;
-(void)startActivityIndicator;
-(void)stopActivityIndicator;


@end


#endif