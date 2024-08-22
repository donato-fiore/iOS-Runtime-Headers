// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVSEMANTICSTYLE_H
#define AVSEMANTICSTYLE_H


#import <Foundation/Foundation.h>


@interface AVSemanticStyle : NSObject {
    NSUInteger _hash;
}


@property (readonly, nonatomic) float sceneBias;
@property (readonly, nonatomic) float subjectBias; // ivar: _subjectBias
@property (readonly, nonatomic) float toneBias; // ivar: _toneBias
@property (readonly, nonatomic) float warmthBias; // ivar: _warmthBias


+(id)identityStyle;
+(id)semanticStyleWithToneBias:(float)arg0 warmthBias:(float)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithToneBias:(float)arg0 warmthBias:(float)arg1 ;
-(id)debugDescription;
-(id)description;


@end


#endif