// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RPSTATUSCONFIGURATION_H
#define RPSTATUSCONFIGURATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface RPStatusConfiguration : NSObject

@property (readonly, nonatomic) NSUInteger flags; // ivar: _flags
@property (readonly, copy, nonatomic) id *handler; // ivar: _handler
@property (readonly, nonatomic) CGFloat leeway; // ivar: _leeway
@property (readonly, copy, nonatomic) NSString *statusID; // ivar: _statusID


-(id)initWithStatusID:(id)arg0 leeway:(CGFloat)arg1 configurationFlags:(NSUInteger)arg2 statusUpdateHandler:(id)arg3 ;


@end


#endif