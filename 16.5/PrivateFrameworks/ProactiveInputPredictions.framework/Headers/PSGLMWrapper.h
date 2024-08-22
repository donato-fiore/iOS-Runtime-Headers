// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSGLMWRAPPER_H
#define PSGLMWRAPPER_H


#import <Foundation/Foundation.h>


@interface PSGLMWrapper : NSObject

@property (readonly, nonatomic) *void langModel; // ivar: _langModel
@property (readonly, nonatomic) *void lexicon; // ivar: _lexicon


-(id)initWithLangModel:(*void)arg0 lexicon:(*void)arg1 ;
-(void)dealloc;


@end


#endif