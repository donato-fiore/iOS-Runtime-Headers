// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DEINSPECTOR_H
#define DEINSPECTOR_H


#import <Foundation/Foundation.h>


@interface DEInspector : NSObject



+(id)getParamsForCat:(id)arg0 templateDir:(id)arg1 includeComputed:(BOOL)arg2 includeSettings:(BOOL)arg3 includeValueFromCat:(BOOL)arg4 ;
+(id)getParamsForPattern:(id)arg0 templateDir:(id)arg1 includeComputed:(BOOL)arg2 includeSettings:(BOOL)arg3 includeValueFromCat:(BOOL)arg4 ;


@end


#endif