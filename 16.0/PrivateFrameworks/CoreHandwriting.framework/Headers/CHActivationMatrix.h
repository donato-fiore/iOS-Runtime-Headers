// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHACTIVATIONMATRIX_H
#define CHACTIVATIONMATRIX_H

@class CVNLPActivationMatrix;

#import <Foundation/Foundation.h>


@interface CHActivationMatrix : NSObject

@property (retain, nonatomic) CVNLPActivationMatrix *activations; // ivar: _activations
@property (nonatomic) BOOL unlikelyHasLatinContents; // ivar: _unlikelyHasLatinContents


-(id)initWithActivations:(id)arg0 ;


@end


#endif