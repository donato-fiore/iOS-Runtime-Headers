// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SARESULTOBJECTREFERENCE_H
#define SARESULTOBJECTREFERENCE_H

@class NSString;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SAResultObjectReference : AceObject <SAAceSerializable>



@property (copy, nonatomic) NSString *className;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *groupName;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *referenceId;
@property (readonly) Class superclass;


+(id)resultObjectReference;
+(id)resultObjectReferenceWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif