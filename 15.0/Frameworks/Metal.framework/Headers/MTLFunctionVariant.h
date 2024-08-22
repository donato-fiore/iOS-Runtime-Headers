// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLFUNCTIONVARIANT_H
#define MTLFUNCTIONVARIANT_H


#import <Foundation/Foundation.h>


@interface MTLFunctionVariant : NSObject {
    *void _inputInfo;
    NSUInteger _inputInfoSize;
}




-(*void)inputInfoAndSize:(*NSUInteger)arg0 ;
-(*void)outputInfoAndSize:(*NSUInteger)arg0 ;
-(id)initWithCompilerOutput:(id)arg0 ;
-(void)dealloc;
-(void)setInputInfo:(*void)arg0 size:(NSUInteger)arg1 ;
-(void)setOutputInfo:(*void)arg0 size:(NSUInteger)arg1 ;


@end


#endif