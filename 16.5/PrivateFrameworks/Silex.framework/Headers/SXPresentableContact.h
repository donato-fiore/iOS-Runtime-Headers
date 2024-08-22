// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXPRESENTABLECONTACT_H
#define SXPRESENTABLECONTACT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SXPresentableContact : NSObject

@property (readonly, nonatomic) NSString *email; // ivar: _email
@property (readonly, nonatomic) NSString *phoneNumber; // ivar: _phoneNumber


-(id)initWithEmail:(id)arg0 ;
-(id)initWithPhoneNumber:(id)arg0 ;


@end


#endif