// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPSPRIMARYMANEUVERLAYOUTCONFIGURATION_H
#define CPSPRIMARYMANEUVERLAYOUTCONFIGURATION_H

@class NSAttributedString, NSString, UIImage;

#import <Foundation/Foundation.h>


@interface CPSPrimaryManeuverLayoutConfiguration : NSObject

@property (retain, nonatomic) NSAttributedString *attributedInstruction; // ivar: _attributedInstruction
@property (nonatomic) CGFloat height; // ivar: _height
@property (retain, nonatomic) NSString *instruction; // ivar: _instruction
@property (retain, nonatomic) UIImage *junctionImage; // ivar: _junctionImage
@property (nonatomic) NSUInteger layout; // ivar: _layout
@property (retain, nonatomic) UIImage *symbolImage; // ivar: _symbolImage


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToConfiguration:(id)arg0 ;
-(id)description;


@end


#endif