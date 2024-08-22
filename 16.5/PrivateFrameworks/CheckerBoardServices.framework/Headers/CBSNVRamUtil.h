// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CBSNVRAMUTIL_H
#define CBSNVRAMUTIL_H


#import <Foundation/Foundation.h>


@interface CBSNVRamUtil : NSObject



+(BOOL)readNVRamVariable:(id)arg0 value:(*id)arg1 ;
+(void)clearNVRamVariable:(id)arg0 ;
+(void)writeNVRamVariable:(id)arg0 value:(id)arg1 ;


@end


#endif