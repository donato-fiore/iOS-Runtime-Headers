// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALLOCATIONAUTHORIZATIONSTATUS_H
#define CALLOCATIONAUTHORIZATIONSTATUS_H


#import <Foundation/Foundation.h>


@interface CalLocationAuthorizationStatus : NSObject

@property (readonly, nonatomic) NSUInteger precision; // ivar: _precision
@property (readonly, nonatomic) int status; // ivar: _status


-(id)initWithStatus:(int)arg0 precision:(NSUInteger)arg1 ;


@end


#endif