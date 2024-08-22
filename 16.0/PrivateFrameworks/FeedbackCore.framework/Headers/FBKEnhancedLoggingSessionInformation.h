// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBKENHANCEDLOGGINGSESSIONINFORMATION_H
#define FBKENHANCEDLOGGINGSESSIONINFORMATION_H

@class NSDate, NSSet, NSNumber, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "FBKContentItem.h"

@interface FBKEnhancedLoggingSessionInformation : NSObject <NSSecureCoding>



@property (readonly, nonatomic) FBKContentItem *contentItem;
@property (retain, nonatomic) NSDate *createdAt; // ivar: _createdAt
@property (retain, nonatomic) NSSet *deviceIdentifiers; // ivar: _deviceIdentifiers
@property (readonly, nonatomic) NSSet *devices;
@property (nonatomic) NSInteger enhancedLoggingDuration; // ivar: _enhancedLoggingDuration
@property (nonatomic) NSInteger enhancedLoggingRetryCount; // ivar: _enhancedLoggingRetryCount
@property (retain, nonatomic) NSNumber *feedbackID; // ivar: _feedbackID
@property (retain, nonatomic) NSNumber *followupID; // ivar: _followupID
@property (readonly, nonatomic) NSString *localizedWhenItWillGather;
@property (retain, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) NSDate *updatedAt; // ivar: _updatedAt


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContentItem:(id)arg0 followup:(id)arg1 filePredicate:(id)arg2 devices:(id)arg3 ;
-(id)searchText;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif