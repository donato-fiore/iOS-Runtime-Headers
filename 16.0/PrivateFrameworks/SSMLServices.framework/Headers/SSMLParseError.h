// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSMLPARSEERROR_H
#define SSMLPARSEERROR_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SSMLParseError : NSObject

@property (retain, nonatomic) NSString *error; // ivar: _error
@property (retain, nonatomic) NSString *hint; // ivar: _hint
@property (retain, nonatomic) NSString *location; // ivar: _location


+(id)errorWith:(id)arg0 hint:(id)arg1 errorLocation:(id)arg2 ;


@end


#endif