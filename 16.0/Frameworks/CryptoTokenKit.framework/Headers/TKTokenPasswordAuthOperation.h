// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TKTOKENPASSWORDAUTHOPERATION_H
#define TKTOKENPASSWORDAUTHOPERATION_H

@class NSString;


#import "TKTokenAuthOperation.h"

@interface TKTokenPasswordAuthOperation : TKTokenAuthOperation

@property (copy) NSString *localizedPasswordLabel; // ivar: _localizedPasswordLabel
@property (copy) NSString *password; // ivar: _password


+(BOOL)supportsSecureCoding;
-(Class)baseClassForUI;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)importOperation:(id)arg0 ;


@end


#endif