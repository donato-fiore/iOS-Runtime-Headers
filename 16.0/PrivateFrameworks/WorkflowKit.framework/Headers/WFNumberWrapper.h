// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFNUMBERWRAPPER_H
#define WFNUMBERWRAPPER_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface WFNumberWrapper : NSObject

@property (readonly, nonatomic) NSNumber *number; // ivar: _number


+(id)wrapperWithNumber:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;


@end


#endif