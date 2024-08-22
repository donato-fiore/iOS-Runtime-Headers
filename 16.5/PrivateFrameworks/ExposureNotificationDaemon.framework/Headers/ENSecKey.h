// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ENSECKEY_H
#define ENSECKEY_H


#import <Foundation/Foundation.h>


@interface ENSecKey : NSObject

@property (readonly, nonatomic) *__SecKey keyRef; // ivar: _keyRef


+(id)keyFromBase64String:(id)arg0 keyClass:(struct __CFString *)arg1 error:(*id)arg2 ;
-(id)initWithKeyRef:(struct __SecKey *)arg0 ;
-(void)dealloc;


@end


#endif