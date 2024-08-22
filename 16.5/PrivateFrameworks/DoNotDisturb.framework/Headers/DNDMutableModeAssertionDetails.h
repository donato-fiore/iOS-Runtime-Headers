// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DNDMUTABLEMODEASSERTIONDETAILS_H
#define DNDMUTABLEMODEASSERTIONDETAILS_H

@class NSString, NSDate;


#import "DNDModeAssertionDetails.h"
#import "DNDModeAssertionLifetime.h"

@interface DNDMutableModeAssertionDetails : DNDModeAssertionDetails

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) DNDModeAssertionLifetime *lifetime;
@property (copy, nonatomic) NSDate *modeConfigurationModifiedDate;
@property (copy, nonatomic) NSString *modeIdentifier;
@property (nonatomic) NSUInteger reason;
@property (copy, nonatomic) NSDate *userVisibleEndDate;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif