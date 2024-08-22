// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXPHONENUMBERACTION_H
#define SXPHONENUMBERACTION_H

@class NSString;
@protocol SXAction;

#import <Foundation/Foundation.h>

#import "SXJSONDictionary.h"

@interface SXPhoneNumberAction : NSObject <SXAction>



@property (readonly, nonatomic) SXJSONDictionary *analytics; // ivar: analytics
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *phoneNumber; // ivar: _phoneNumber
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *type;


-(id)initWithPhoneNumber:(id)arg0 ;


@end


#endif