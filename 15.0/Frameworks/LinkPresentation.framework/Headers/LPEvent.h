// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LPEVENT_H
#define LPEVENT_H

@class NSURL, NSArray, NSString;

#import <Foundation/Foundation.h>

#import "LPEvent.h"

@interface LPEvent : NSObject

@property (retain, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, nonatomic) NSArray *children; // ivar: _children
@property (readonly, nonatomic) CGFloat duration;
@property (readonly, nonatomic) CGFloat endTime; // ivar: _endTime
@property (readonly, weak, nonatomic) LPEvent *parent; // ivar: _parent
@property (nonatomic) NSUInteger specialization; // ivar: _specialization
@property (readonly, nonatomic) CGFloat startTime; // ivar: _startTime
@property (readonly, nonatomic) NSInteger status; // ivar: _status
@property (readonly, copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, nonatomic) NSInteger type; // ivar: _type


-(BOOL)isComplete;
-(id)childWithType:(NSInteger)arg0 subtitle:(id)arg1 ;
-(id)init;
-(id)initWithType:(NSInteger)arg0 subtitle:(id)arg1 ;
-(void)didCompleteWithErrorCode:(NSInteger)arg0 ;
-(void)didCompleteWithStatus:(NSInteger)arg0 ;


@end


#endif