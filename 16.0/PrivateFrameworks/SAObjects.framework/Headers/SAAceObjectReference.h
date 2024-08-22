// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAACEOBJECTREFERENCE_H
#define SAACEOBJECTREFERENCE_H

@class NSString;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SAAceObjectReference : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *referenceIdentifier;
@property (copy, nonatomic) NSString *referenceType;
@property (readonly) Class superclass;


+(id)aceObjectReference;
+(id)aceObjectReferenceWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif