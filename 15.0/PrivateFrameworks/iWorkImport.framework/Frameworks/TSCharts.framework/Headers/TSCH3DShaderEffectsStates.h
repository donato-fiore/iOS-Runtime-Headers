// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DSHADEREFFECTSSTATES_H
#define TSCH3DSHADEREFFECTSSTATES_H

@class NSMutableDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSCH3DShaderEffectsStates : NSObject <NSCopying>

 {
    NSMutableDictionary *_objects;
}




-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)stateForStateInfo:(id)arg0 createIfNil:(BOOL)arg1 ;
-(id)valueStateForKey:(id)arg0 ;
-(void)clear;
-(void)setState:(id)arg0 forStateInfo:(id)arg1 ;
-(void)setValueState:(id)arg0 forKey:(id)arg1 ;


@end


#endif