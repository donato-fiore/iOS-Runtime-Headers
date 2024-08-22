// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PASSECURECODINGHELPER_H
#define _PASSECURECODINGHELPER_H


#import <Foundation/Foundation.h>


@interface _PASSecureCodingHelper : NSObject



+(id)robustDecodeObjectOfClass:(Class)arg0 forKey:(id)arg1 withCoder:(id)arg2 expectNonNull:(BOOL)arg3 errorDomain:(id)arg4 errorCode:(NSInteger)arg5 logHandle:(id)arg6 ;
+(id)robustDecodeObjectOfClasses:(id)arg0 forKey:(id)arg1 withCoder:(id)arg2 expectNonNull:(BOOL)arg3 errorDomain:(id)arg4 errorCode:(NSInteger)arg5 logHandle:(id)arg6 ;


@end


#endif