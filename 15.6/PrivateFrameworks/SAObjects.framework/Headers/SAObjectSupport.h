// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAOBJECTSUPPORT_H
#define SAOBJECTSUPPORT_H

@class NSString, NSArray;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SAObjectSupport : AceObject <SAAceSerializable>



@property (copy, nonatomic) NSString *aceVersion;
@property (copy, nonatomic) NSString *classId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *groupId;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *supportedProperties;


+(id)objectSupport;
+(id)objectSupportWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;


@end


#endif