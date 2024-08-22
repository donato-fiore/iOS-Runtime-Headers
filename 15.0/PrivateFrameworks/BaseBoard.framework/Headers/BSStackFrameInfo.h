// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BSSTACKFRAMEINFO_H
#define BSSTACKFRAMEINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface BSStackFrameInfo : NSObject {
    NSString *_realFunctionName;
}


@property (readonly, nonatomic) NSUInteger address; // ivar: _address
@property (readonly, nonatomic) NSString *className; // ivar: _className
@property (readonly, nonatomic) NSString *executableName;
@property (readonly, nonatomic) NSString *executablePath; // ivar: _executablePath
@property (readonly, nonatomic) NSString *functionName; // ivar: _functionName


-(id)description;


@end


#endif