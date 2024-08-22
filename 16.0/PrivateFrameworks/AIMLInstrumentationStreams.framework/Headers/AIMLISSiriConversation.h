// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AIMLISSIRICONVERSATION_H
#define AIMLISSIRICONVERSATION_H

@class NSDate, NSUUID, NSArray;

#import <Foundation/Foundation.h>


@interface AIMLISSiriConversation : NSObject {
    ? turns;
}


@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSUUID *firstTurnId;
@property (nonatomic, readonly) CGFloat timestamp;
@property (nonatomic, readonly) NSArray *turns;


-(id)init;


@end


#endif