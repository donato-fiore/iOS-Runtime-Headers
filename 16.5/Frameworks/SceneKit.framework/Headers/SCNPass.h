// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCNPASS_H
#define SCNPASS_H


#import <Foundation/Foundation.h>

#import "SCNTechnique.h"

@interface SCNPass : NSObject {
    ? _fxPass;
    SCNTechnique *_technique;
}


@property (copy, nonatomic) id *executionHandler;
@property (copy, nonatomic) id *initializationHandler;


-(?)initWithFXPasstechnique;
-(id)valueForPassPropertyKey:(NSInteger)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)setValue:(id)arg0 forPassPropertyKey:(NSInteger)arg1 ;


@end


#endif