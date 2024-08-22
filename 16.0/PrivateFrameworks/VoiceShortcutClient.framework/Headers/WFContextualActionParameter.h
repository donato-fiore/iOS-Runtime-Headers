// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFCONTEXTUALACTIONPARAMETER_H
#define WFCONTEXTUALACTIONPARAMETER_H

@class NSString;
@protocol NSSecureCoding, WFPropertyListObject;

#import <Foundation/Foundation.h>


@interface WFContextualActionParameter : NSObject <NSSecureCoding>



@property (readonly, nonatomic, getter=isActionInput) BOOL actionInput; // ivar: _actionInput
@property (readonly, nonatomic, getter=isAskEachTime) BOOL askEachTime; // ivar: _askEachTime
@property (readonly, copy, nonatomic) NSString *displayString; // ivar: _displayString
@property (readonly, nonatomic) NSString *type; // ivar: _type
@property (readonly, nonatomic) NSString *wfParameterKey; // ivar: _wfParameterKey
@property (readonly, nonatomic) NSObject<WFPropertyListObject> *wfSerializedRepresentation; // ivar: _wfSerializedRepresentation


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(id)arg0 displayString:(id)arg1 wfParameterKey:(id)arg2 askEachTime:(BOOL)arg3 ;
-(id)initWithType:(id)arg0 displayString:(id)arg1 wfParameterKey:(id)arg2 isActionInput:(BOOL)arg3 ;
-(id)initWithType:(id)arg0 displayString:(id)arg1 wfParameterKey:(id)arg2 wfSerializedRepresentation:(id)arg3 ;
-(id)initWithType:(id)arg0 displayString:(id)arg1 wfParameterKey:(id)arg2 wfSerializedRepresentation:(id)arg3 askEachTime:(BOOL)arg4 actionInput:(BOOL)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif