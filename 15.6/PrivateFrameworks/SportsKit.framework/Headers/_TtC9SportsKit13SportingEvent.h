// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC9SPORTSKIT13SPORTINGEVENT_H
#define _TTC9SPORTSKIT13SPORTINGEVENT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _TtC9SportsKit13SportingEvent : NSObject {
    ? canonicalId;
    ? version;
    ? progressStatus;
    ? competitors;
    ? clock;
    ? plays;
    ? coverage;
    ? tournament;
}


@property (nonatomic, readonly) NSString *debugDescription;


-(id)init;


@end


#endif