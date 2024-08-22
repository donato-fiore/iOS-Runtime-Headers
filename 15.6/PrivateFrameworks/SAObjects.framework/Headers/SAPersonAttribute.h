// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAPERSONATTRIBUTE_H
#define SAPERSONATTRIBUTE_H

@class NSString;
@protocol SAAceSerializable, SAAceComparable;


#import "AceObject.h"
#import "SAPerson.h"

@interface SAPersonAttribute : AceObject <SAAceSerializable>



@property (copy, nonatomic) NSString *data;
@property (copy, nonatomic) NSString *dataType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *displayText;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SAPerson *object;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<SAAceComparable> *typedData;


+(id)personAttribute;
+(id)personAttributeWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif