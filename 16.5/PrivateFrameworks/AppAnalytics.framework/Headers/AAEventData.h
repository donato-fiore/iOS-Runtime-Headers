// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AAEVENTDATA_H
#define AAEVENTDATA_H

@class NSString, NSDate;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface AAEventData : NSObject <AADataEventType>

 {
    ? eventID;
    ? eventDate;
    ? eventPath;
    ? sessionID;
    ? appSessionID;
}


@property (nonatomic, readonly) NSString *appSessionID;
@property (nonatomic, readonly) NSDate *eventDate;
@property (nonatomic, readonly) NSString *eventID;
@property (nonatomic, readonly) NSString *eventPath;
@property (nonatomic, readonly) NSString *sessionID;


+(id)dataName;
-(id)init;
-(id)toDict;


@end


#endif