// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CATSHARINGBENIGNERROR_H
#define CATSHARINGBENIGNERROR_H

@class NSString, NSError;
@protocol CATSharingFailureEvent;

#import <Foundation/Foundation.h>


@interface CATSharingBenignError : NSObject <CATSharingFailureEvent>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger failureType;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSError *underlyingError; // ivar: _underlyingError


-(id)initWithUnderlyingError:(id)arg0 ;


@end


#endif