// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LACUSTOMPASSWORDVERIFICATIONACTION_H
#define LACUSTOMPASSWORDVERIFICATIONACTION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface LACustomPasswordVerificationAction : NSObject {
    NSInteger _type;
    NSString *_customPassword;
}




+(id)submitCustomPasswordAction:(id)arg0 ;
+(id)terminateAction;
+(id)userCancelAction;
-(BOOL)isEqual:(id)arg0 ;


@end


#endif