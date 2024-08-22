// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AASESSION_H
#define AASESSION_H

@class NSString, NSDictionary, NSDate;

#import <Foundation/Foundation.h>


@interface AASession : NSObject {
    ? identifier;
    ? name;
    ? startDate;
    ? sessionData;
}


@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSInteger kind; // ivar: kind
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSDictionary *sessionData;
@property (nonatomic, readonly) NSDate *startDate;


-(id)init;


@end


#endif