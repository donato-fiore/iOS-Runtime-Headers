// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PASFLOWRESULT_H
#define PASFLOWRESULT_H

@class NSDictionary, NSString, NSError, FAFamilyMember, ACAccount;

#import <Foundation/Foundation.h>


@interface PASFlowResult : NSObject {
    ? result;
}


@property (nonatomic, readonly) NSInteger accountType;
@property (nonatomic, readonly) NSDictionary *authResults;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) FAFamilyMember *familyMember;
@property (nonatomic, readonly) ACAccount *personalAccount;


-(id)init;


@end


#endif