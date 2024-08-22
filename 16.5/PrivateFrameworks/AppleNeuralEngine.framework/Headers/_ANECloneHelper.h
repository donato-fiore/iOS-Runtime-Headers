// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ANECLONEHELPER_H
#define _ANECLONEHELPER_H


#import <Foundation/Foundation.h>


@interface _ANECloneHelper : NSObject



+(BOOL)shouldSkipCloneFor:(id)arg0 isEncryptedModel:(BOOL)arg1 ;
+(id)cloneIfWritable:(id)arg0 isEncryptedModel:(BOOL)arg1 cloneDirectory:(id)arg2 ;


@end


#endif