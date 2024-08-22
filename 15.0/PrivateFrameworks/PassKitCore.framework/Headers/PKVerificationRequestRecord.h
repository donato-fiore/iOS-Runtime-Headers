// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKVERIFICATIONREQUESTRECORD_H
#define PKVERIFICATIONREQUESTRECORD_H

@class NSArray, NSString, NSDate, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKVerificationChannel.h"

@interface PKVerificationRequestRecord : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSArray *allChannels; // ivar: _allChannels
@property (copy, nonatomic) PKVerificationChannel *channel; // ivar: _channel
@property (copy, nonatomic) NSString *currentStepIdentifier; // ivar: _currentStepIdentifier
@property (copy, nonatomic) NSDate *date; // ivar: _date
@property (copy, nonatomic) NSString *passUniqueID; // ivar: _passUniqueID
@property (copy, nonatomic) NSString *previousStepIdentifier; // ivar: _previousStepIdentifier
@property (copy, nonatomic) NSDictionary *requiredFieldData; // ivar: _requiredFieldData
@property (nonatomic) NSInteger verificationStatus; // ivar: _verificationStatus


+(BOOL)supportsSecureCoding;
+(id)verificationRequestRecordForPass:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)requiredVerificationFields;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif