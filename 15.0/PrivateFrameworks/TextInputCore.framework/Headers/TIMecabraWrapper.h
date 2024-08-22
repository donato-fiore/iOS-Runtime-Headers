// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TIMECABRAWRAPPER_H
#define TIMECABRAWRAPPER_H


#import <Foundation/Foundation.h>


@interface TIMecabraWrapper : NSObject

@property (readonly) int inputMethodType; // ivar: _inputMethodType
@property (readonly) *__Mecabra mecabraRef; // ivar: _mecabraRef


-(id)initWithInputMethodType:(int)arg0 learningDictionaryDirectoryURL:(id)arg1 creationOptionsDictionary:(id)arg2 ;
-(id)initWithInputMethodType:(int)arg0 learningDictionaryDirectoryURL:(struct __CFURL *)arg1 creationOptions:(NSUInteger)arg2 ;
-(void)dealloc;


@end


#endif