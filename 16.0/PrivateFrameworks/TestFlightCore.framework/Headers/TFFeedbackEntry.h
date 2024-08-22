// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TFFEEDBACKENTRY_H
#define TFFEEDBACKENTRY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TFFeedbackEntry : NSObject

@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


-(id)initWithType:(NSUInteger)arg0 identifier:(id)arg1 title:(id)arg2 ;


@end


#endif