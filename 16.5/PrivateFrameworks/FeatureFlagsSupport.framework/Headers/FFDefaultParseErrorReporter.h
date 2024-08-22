// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FFDEFAULTPARSEERRORREPORTER_H
#define FFDEFAULTPARSEERRORREPORTER_H

@protocol FFParseErrorReporter;

#import <Foundation/Foundation.h>


@interface FFDefaultParseErrorReporter : NSObject <FFParseErrorReporter>





-(void)reportError:(id)arg0 ;


@end


#endif