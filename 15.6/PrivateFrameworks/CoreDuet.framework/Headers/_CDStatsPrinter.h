// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CDSTATSPRINTER_H
#define _CDSTATSPRINTER_H

@class NSMutableString;

#import <Foundation/Foundation.h>


@interface _CDStatsPrinter : NSObject {
    NSMutableString *_s;
    NSUInteger _indent;
}




-(id)description;
-(id)init;


@end


#endif