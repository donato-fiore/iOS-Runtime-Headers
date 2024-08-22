// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRREQUESTUSERCONFIRMATIONCOMMAND_H
#define CRREQUESTUSERCONFIRMATIONCOMMAND_H

@class NSString, NSDictionary;
@protocol CRCommand;

#import <Foundation/Foundation.h>


@interface CRRequestUserConfirmationCommand : NSObject <CRCommand>



@property (nonatomic) NSUInteger commandDirection; // ivar: commandDirection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDictionary *userInfo; // ivar: userInfo


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif