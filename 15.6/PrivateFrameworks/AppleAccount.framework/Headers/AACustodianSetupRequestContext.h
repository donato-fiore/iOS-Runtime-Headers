// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AACUSTODIANSETUPREQUESTCONTEXT_H
#define AACUSTODIANSETUPREQUESTCONTEXT_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AACustodianSetupRequestContext : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *contactID; // ivar: _contactID
@property (readonly, copy, nonatomic) NSString *custodianSetupToken; // ivar: _custodianSetupToken
@property (readonly, copy, nonatomic) NSString *handle; // ivar: _handle


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHandle:(id)arg0 authResults:(id)arg1 ;
-(void)_parseAuthResults:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif