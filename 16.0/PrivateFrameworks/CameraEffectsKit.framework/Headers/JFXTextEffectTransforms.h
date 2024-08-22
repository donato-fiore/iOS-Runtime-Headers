// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef JFXTEXTEFFECTTRANSFORMS_H
#define JFXTEXTEFFECTTRANSFORMS_H

@class PVMatrix44Double;

#import <Foundation/Foundation.h>


@interface JFXTextEffectTransforms : NSObject

@property (copy, nonatomic) PVMatrix44Double *transform; // ivar: _transform


+(id)transformsWithEffect:(id)arg0 ;
+(id)transformsWithTransform:(id)arg0 ;
-(id)initWithEffect:(id)arg0 ;
-(id)initWithTransform:(id)arg0 ;
-(void)applyToEffect:(id)arg0 ;


@end


#endif