// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LACUSTOMPASSWORDREQUIREMENT_H
#define LACUSTOMPASSWORDREQUIREMENT_H

@class NSString;
@protocol LAACLSerializable;

#import <Foundation/Foundation.h>


@interface LACustomPasswordRequirement : NSObject <LAACLSerializable>

 {
    NSString *_password;
}




+(void)requestCreationWithLocalizedReason:(id)arg0 completion:(id)arg1 ;
-(id)initWithCustomPassword:(id)arg0 ;
-(void)encodeWithACLCoder:(id)arg0 ;


@end


#endif