// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STASKFORTIMERESPONSE_H
#define STASKFORTIMERESPONSE_H

@class NSNumber, NSUUID, NSDictionary, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface STAskForTimeResponse : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSNumber *amountGranted; // ivar: _amountGranted
@property (nonatomic) NSInteger answer; // ivar: _answer
@property (retain, nonatomic) NSUUID *associatedRequestIdentifier; // ivar: _associatedRequestIdentifier
@property (readonly, copy, nonatomic) NSDictionary *payload;
@property (retain, nonatomic) NSNumber *respondingUserDSID; // ivar: _respondingUserDSID
@property (retain, nonatomic) NSDate *timeStamp; // ivar: _timeStamp


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPayload:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif