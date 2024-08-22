// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDDATABASECORRUPTIONEVENT_H
#define HDDATABASECORRUPTIONEVENT_H

@class NSString, NSDate, NSError, HKProfileIdentifier;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HDDatabaseCorruptionEvent : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *buildDescription; // ivar: _buildDescription
@property (readonly) NSInteger component; // ivar: _component
@property (readonly, copy, nonatomic) NSDate *date; // ivar: _date
@property (readonly, copy, nonatomic) NSError *error; // ivar: _error
@property (readonly, copy, nonatomic) NSString *failedObliterationReason; // ivar: _failedObliterationReason
@property (readonly, copy, nonatomic) HKProfileIdentifier *profileIdentifier; // ivar: _profileIdentifier


+(BOOL)supportsSecureCoding;
+(id)createForProfile:(id)arg0 component:(NSInteger)arg1 error:(id)arg2 failedObliterationReason:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithError:(id)arg0 date:(id)arg1 profileIdentifier:(id)arg2 component:(NSInteger)arg3 build:(id)arg4 failedObliterationReason:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif