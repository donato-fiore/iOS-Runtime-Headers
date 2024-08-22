// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HVCONSUMPTIONCONTEXT_H
#define HVCONSUMPTIONCONTEXT_H

@class NSString;
@protocol BMIdentifiableContentEvent;

#import <Foundation/Foundation.h>


@interface HVConsumptionContext : NSObject {
    id *_scheduledTaskShouldContinueBlock;
}


@property (readonly, nonatomic) NSObject<BMIdentifiableContentEvent> *content; // ivar: _content
@property (readonly, nonatomic) NSString *contentProtection; // ivar: _contentProtection


-(BOOL)shouldContinue;
-(id)description;
-(id)initWithContent:(id)arg0 contentProtection:(id)arg1 scheduledTaskShouldContinueBlock:(id)arg2 ;


@end


#endif