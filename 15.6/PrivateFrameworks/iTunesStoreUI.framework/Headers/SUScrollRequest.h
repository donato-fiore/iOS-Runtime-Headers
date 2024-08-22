// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUSCROLLREQUEST_H
#define SUSCROLLREQUEST_H

@class NSValue;

#import <Foundation/Foundation.h>


@interface SUScrollRequest : NSObject

@property (nonatomic, getter=isAnimated) BOOL animated; // ivar: _animated
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain) NSValue *contentOffsetValue; // ivar: _contentOffsetValue
@property (retain) NSValue *frameValue; // ivar: _frameValue


-(void)dealloc;


@end


#endif