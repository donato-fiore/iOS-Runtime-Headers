// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTIMSREGISTRATIONSTATUS_H
#define CTIMSREGISTRATIONSTATUS_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTIMSRegistrationStatus : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) BOOL isRegisteredForSMS; // ivar: _isRegisteredForSMS
@property (nonatomic) BOOL isRegisteredForVoice; // ivar: _isRegisteredForVoice


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif