// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSINSTANTANSWER_H
#define CSINSTANTANSWER_H

@class NSMutableArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "CSDonatedEvent.h"

@interface CSInstantAnswer : NSObject <NSCopying>



@property (retain, nonatomic) NSMutableArray *actions; // ivar: _actions
@property (retain, nonatomic) CSDonatedEvent *event; // ivar: _event


+(id)dataFromInstantAnswers:(id)arg0 ;
+(id)instantAnswersFromData:(id)arg0 ;
-(id)attributes;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAttributes:(id)arg0 ;
-(id)initWithEvent:(id)arg0 ;
-(void)addAction:(id)arg0 ;


@end


#endif