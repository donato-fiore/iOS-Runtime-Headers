// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMBASEPROPERTYCONFIGURATION_H
#define BMBASEPROPERTYCONFIGURATION_H

@class NSString;
@protocol BMPropertyConfiguration;

#import <Foundation/Foundation.h>


@interface BMBasePropertyConfiguration : NSObject <BMPropertyConfiguration>

 {
    ? eventName;
    ? identifier;
    ? shouldBeCached;
}


@property (nonatomic, readonly) NSInteger ageToExpire; // ivar: ageToExpire
@property (nonatomic, readonly) NSInteger countLimit; // ivar: countLimit
@property (nonatomic, readonly) NSString *eventName;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSInteger recordType; // ivar: recordType


-(BOOL)isEqual:(id)arg0 ;
-(id)init;


@end


#endif