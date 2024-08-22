// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXSCORABLETIMEDIGESTTIMEWRAPPER_H
#define ATXSCORABLETIMEDIGESTTIMEWRAPPER_H

@class NSString;
@protocol ATXScorableTimePeriodProtocol;

#import <Foundation/Foundation.h>


@interface ATXScorableTimeDigestTimeWrapper : NSObject <ATXScorableTimePeriodProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger digestTime; // ivar: _digestTime
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *legacyScorableTimeIdentifier;
@property (readonly, nonatomic) NSString *scorableTimeIdentifier;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithDigestTime:(NSInteger)arg0 ;


@end


#endif