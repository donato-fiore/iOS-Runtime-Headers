// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRMUTABLEAPPLICATIONACTIVITY_H
#define MRMUTABLEAPPLICATIONACTIVITY_H

@class NSString;
@protocol NSSecureCoding;


#import "MRApplicationActivity.h"

@interface MRMutableApplicationActivity : MRApplicationActivity <NSSecureCoding>



@property (copy, nonatomic) NSString *primaryApplicationDisplayID;
@property (copy, nonatomic) NSString *secondaryApplicationDisplayID;
@property (nonatomic) int status;


+(BOOL)supportsSecureCoding;


@end


#endif