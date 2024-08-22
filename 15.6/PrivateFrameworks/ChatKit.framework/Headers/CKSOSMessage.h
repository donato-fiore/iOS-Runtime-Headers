// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKSOSMESSAGE_H
#define CKSOSMESSAGE_H

@class NSArray, CLLocation, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CKSOSMessage : NSObject <NSCopying>



@property (copy, nonatomic) id *failureBlock; // ivar: _failureBlock
@property (copy, nonatomic, getter=handles) NSArray *handles; // ivar: _handles
@property (copy, nonatomic) CLLocation *location; // ivar: _location
@property (copy, nonatomic) NSString *locationURL; // ivar: _locationURL
@property (copy, nonatomic) NSString *message; // ivar: _message
@property (copy, nonatomic) NSString *mmsMessage; // ivar: _mmsMessage
@property (copy, nonatomic) NSArray *recipients; // ivar: _recipients
@property (copy, nonatomic) NSString *smsMessage; // ivar: _smsMessage
@property (nonatomic) BOOL useStandalone; // ivar: _useStandalone


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithMessage:(id)arg0 recipients:(id)arg1 ;
-(id)initWithSMSMessage:(id)arg0 mmsMessage:(id)arg1 recipients:(id)arg2 ;


@end


#endif