// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISDISPLAYSINGLERECTSHAPE_H
#define UISDISPLAYSINGLERECTSHAPE_H



#import "UISDisplayShape.h"

@interface UISDisplaySingleRectShape : UISDisplayShape

@property (readonly, nonatomic) CGRect rect; // ivar: _rect


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithRect:(struct CGRect )arg0 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif