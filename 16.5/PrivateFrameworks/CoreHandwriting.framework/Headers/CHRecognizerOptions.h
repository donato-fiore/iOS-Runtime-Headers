// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHRECOGNIZEROPTIONS_H
#define CHRECOGNIZEROPTIONS_H


#import <Foundation/Foundation.h>


@interface CHRecognizerOptions : NSObject

@property (nonatomic) BOOL enableCachingIfAvailable; // ivar: _enableCachingIfAvailable
@property (nonatomic) BOOL enableGen2CharacterLMIfAvailable; // ivar: _enableGen2CharacterLMIfAvailable
@property (nonatomic) BOOL enableGen2ModelIfAvailable; // ivar: _enableGen2ModelIfAvailable


-(id)init;


@end


#endif