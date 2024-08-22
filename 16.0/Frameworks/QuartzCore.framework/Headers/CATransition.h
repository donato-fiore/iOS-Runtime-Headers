// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CATRANSITION_H
#define CATRANSITION_H

@class NSDictionary, NSString;


#import "CAAnimation.h"

@interface CATransition : CAAnimation

@property float endProgress;
@property (copy) NSDictionary *options;
@property float startProgress;
@property (copy) NSString *subtype;
@property unsigned int transitionFlags;
@property (copy) NSString *type;


-(*void)_copyRenderAnimationForLayer:(id)arg0 ;
-(BOOL)_setCARenderAnimation:(*void)arg0 layer:(id)arg1 ;
-(id)filter;
-(unsigned int)_propertyFlagsForLayer:(id)arg0 ;
-(void)setFilter:(id)arg0 ;


@end


#endif