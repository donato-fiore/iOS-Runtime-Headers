// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAOPERATION_H
#define SAOPERATION_H

@class NSDictionary, NSString;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SAOperation : AceObject <SAAceSerializable>



@property (copy, nonatomic) NSDictionary *constraints;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *domainId;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *operationId;
@property (readonly) Class superclass;


+(id)operation;
+(id)operationWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif