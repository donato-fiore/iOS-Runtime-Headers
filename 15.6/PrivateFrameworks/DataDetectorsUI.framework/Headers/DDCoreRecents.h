// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DDCORERECENTS_H
#define DDCORERECENTS_H


#import <Foundation/Foundation.h>


@interface DDCoreRecents : NSObject



+(void)addResultToRecents:(id)arg0 associatedResults:(id)arg1 weight:(id)arg2 context:(id)arg3 userInitiated:(BOOL)arg4 ;
+(void)addResultToRecents:(id)arg0 eventDate:(id)arg1 subject:(id)arg2 weight:(id)arg3 metadata:(id)arg4 userInitiated:(BOOL)arg5 ;


@end


#endif