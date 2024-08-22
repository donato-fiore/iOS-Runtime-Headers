// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAUSERTOKENSTATUS_H
#define SAUSERTOKENSTATUS_H

@class NSString, NSNumber;
@protocol SABackgroundContextObject;


#import "AceObject.h"

@interface SAUserTokenStatus : AceObject <SABackgroundContextObject>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSNumber *errorCode;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *lastUpdateAttemptTime;
@property (copy, nonatomic) NSNumber *shouldExcludeFromBackgroundRefresh;
@property (readonly) Class superclass;


-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif