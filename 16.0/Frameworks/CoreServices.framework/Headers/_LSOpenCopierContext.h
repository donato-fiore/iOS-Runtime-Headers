// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _LSOPENCOPIERCONTEXT_H
#define _LSOPENCOPIERCONTEXT_H

@class NSURL, NSError;

#import <Foundation/Foundation.h>


@interface _LSOpenCopierContext : NSObject

@property (nonatomic) int callbackType; // ivar: _callbackType
@property (retain, nonatomic) NSURL *destURL; // ivar: _destURL
@property (retain, nonatomic) NSError *error; // ivar: _error




@end


#endif