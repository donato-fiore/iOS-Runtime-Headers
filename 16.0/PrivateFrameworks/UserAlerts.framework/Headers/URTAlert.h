// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef URTALERT_H
#define URTALERT_H

@class NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "URTAlertAction.h"

@interface URTAlert : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSArray *allowedApplicationBundleIDs; // ivar: _allowedApplicationBundleIDs
@property (retain, nonatomic) URTAlertAction *cancelAction; // ivar: _cancelAction
@property (retain, nonatomic) URTAlertAction *defaultAction; // ivar: _defaultAction
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *message; // ivar: _message
@property (retain, nonatomic) URTAlertAction *otherAction; // ivar: _otherAction
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
+(id)alertWithTitle:(id)arg0 message:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitle:(id)arg0 message:(id)arg1 ;
-(id)userNotificationRepresentation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif