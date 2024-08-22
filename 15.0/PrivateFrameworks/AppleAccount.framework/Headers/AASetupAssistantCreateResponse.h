// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AASETUPASSISTANTCREATERESPONSE_H
#define AASETUPASSISTANTCREATERESPONSE_H

@class NSString, NSNumber;


#import "AAResponse.h"

@interface AASetupAssistantCreateResponse : AAResponse

@property (readonly, nonatomic) NSString *HSAAction; // ivar: _HSAAction
@property (readonly, nonatomic) NSString *HSAData; // ivar: _HSAData
@property (readonly, nonatomic) NSString *appleID;
@property (readonly, nonatomic) NSString *personID;
@property (readonly, nonatomic) NSNumber *status;
@property (readonly, nonatomic) NSString *statusMessage;




@end


#endif