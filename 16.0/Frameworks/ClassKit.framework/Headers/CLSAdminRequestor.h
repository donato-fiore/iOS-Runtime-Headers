// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSADMINREQUESTOR_H
#define CLSADMINREQUESTOR_H

@class NSString, NSDictionary;


#import "CLSObject.h"

@interface CLSAdminRequestor : CLSObject {
    NSString *_verificationCode;
    NSString *_note;
}


@property (copy, nonatomic) NSString *email; // ivar: _email
@property (copy, nonatomic) NSString *note;
@property (copy, nonatomic) NSDictionary *serverRequestHeaders; // ivar: _serverRequestHeaders
@property (nonatomic) NSInteger state; // ivar: _state
@property (copy, nonatomic) NSString *verificationCode;


+(BOOL)supportsSecureCoding;
+(NSInteger)verificationStateFromString:(id)arg0 ;
+(id)_propertyNames;
+(id)identifierForRequestorEmail:(id)arg0 ;
+(id)stringForVerificationState:(NSInteger)arg0 ;
-(id)_init;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEmail:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)mergeWithObject:(id)arg0 ;
-(void)reset;


@end


#endif