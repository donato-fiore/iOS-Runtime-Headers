// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CARPFMESSAGEFILTER_H
#define CARPFMESSAGEFILTER_H

@class NSArray, NSString;
@protocol CARPFLogging, CARPFObject;


#import "CARPFObject.h"
#import "CARPFMessage.h"

@interface CARPFMessageFilter : CARPFObject <CARPFLogging, CARPFObject>



@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *carpf_privateDescription;
@property (readonly, copy) NSString *carpf_shortDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) CARPFMessage *message; // ivar: _message
@property (readonly, copy) NSString *propertyDescription;
@property (readonly) Class superclass;


+(BOOL)canInitWithMessage:(id)arg0 ;
+(id)logCategory;
+(id)policyClasses;
-(BOOL)acceptWithPolicies:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithMessage:(id)arg0 ;
-(id)logIdentifier;


@end


#endif