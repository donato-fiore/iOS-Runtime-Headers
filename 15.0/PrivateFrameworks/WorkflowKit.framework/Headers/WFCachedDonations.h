// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFCACHEDDONATIONS_H
#define WFCACHEDDONATIONS_H

@class NSArray, NSDate;

#import <Foundation/Foundation.h>


@interface WFCachedDonations : NSObject

@property (readonly, nonatomic) NSUInteger ballpark; // ivar: _ballpark
@property (readonly, nonatomic) NSArray *donations; // ivar: _donations
@property (readonly, nonatomic) NSDate *fetchDate; // ivar: _fetchDate


-(BOOL)isValidWithBallpark:(NSUInteger)arg0 ;
-(id)initWithDonations:(id)arg0 ballpark:(NSUInteger)arg1 ;


@end


#endif