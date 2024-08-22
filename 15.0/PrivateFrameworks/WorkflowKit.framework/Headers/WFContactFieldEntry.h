// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFCONTACTFIELDENTRY_H
#define WFCONTACTFIELDENTRY_H

@class WFContact, NSString, WFEmailAddress, WFPhoneNumber;
@protocol WFNaming, WFParameterState;

#import <Foundation/Foundation.h>


@interface WFContactFieldEntry : NSObject <WFNaming, WFParameterState>



@property (readonly, nonatomic) WFContact *contact; // ivar: _contact
@property (readonly, nonatomic) NSString *customHandle; // ivar: _customHandle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) WFEmailAddress *emailAddress; // ivar: _emailAddress
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) WFPhoneNumber *phoneNumber; // ivar: _phoneNumber
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, copy, nonatomic) NSString *wfName;


+(id)processingValueClasses;
-(BOOL)isEqual:(id)arg0 ;
-(id)containedVariables;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithContact:(id)arg0 ;
-(id)initWithCustomHandle:(id)arg0 ;
-(id)initWithEmailAddress:(id)arg0 ;
-(id)initWithHandleString:(id)arg0 ;
-(id)initWithPhoneNumber:(id)arg0 ;
-(id)initWithSerializedRepresentation:(id)arg0 variableProvider:(id)arg1 parameter:(id)arg2 ;
-(id)serializedRepresentation;
-(id)underlyingObject;
// -(void)processWithContext:(id)arg0 userInputRequiredHandler:(id)arg1 valueHandler:(unk)arg2  ;


@end


#endif