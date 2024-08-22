// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICOBFUSCATOR_H
#define ICOBFUSCATOR_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "ICRandomTextGenerator.h"

@interface ICObfuscator : NSObject

@property (retain, nonatomic) NSMutableDictionary *imageMap; // ivar: _imageMap
@property (retain, nonatomic) ICRandomTextGenerator *randomTextGenerator; // ivar: _randomTextGenerator


-(id)init;
-(id)obfuscateString:(id)arg0 ;
-(id)obfuscatedImageOfSize:(struct CGSize )arg0 ;
-(id)obfuscatedStringOfLength:(NSUInteger)arg0 ;
-(void)dealloc;


@end


#endif