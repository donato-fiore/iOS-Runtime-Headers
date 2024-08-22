// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SNTESTFAILURE_H
#define SNTESTFAILURE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SNTestFailure : NSObject

@property (readonly, copy, nonatomic) NSString *message; // ivar: _message


-(id)initWithMessage:(id)arg0 ;
-(id)initWithMissingClass:(Class)arg0 ;


@end


#endif