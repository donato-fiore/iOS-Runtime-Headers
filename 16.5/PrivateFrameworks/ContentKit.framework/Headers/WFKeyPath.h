// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFKEYPATH_H
#define WFKEYPATH_H


#import <Foundation/Foundation.h>


@interface WFKeyPath : NSObject



+(id)evaluateKeyPath:(id)arg0 onObject:(id)arg1 error:(*id)arg2 ;
+(id)valueFromArray:(id)arg0 component:(id)arg1 previousKeyPath:(id)arg2 error:(*id)arg3 ;
+(id)valueFromDictionary:(id)arg0 component:(id)arg1 previousKeyPath:(id)arg2 isLastComponent:(BOOL)arg3 error:(*id)arg4 ;


@end


#endif