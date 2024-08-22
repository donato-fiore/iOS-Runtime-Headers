// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFHMSERVICEPARAMETERSTATE_H
#define WFHMSERVICEPARAMETERSTATE_H

@class NSString, NSDictionary, HMService;
@protocol WFParameterState;

#import <Foundation/Foundation.h>


@interface WFHMServiceParameterState : NSObject <WFParameterState>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *homeIdentifier; // ivar: _homeIdentifier
@property (retain, nonatomic) NSDictionary *serializedService; // ivar: _serializedService
@property (readonly, nonatomic) HMService *service; // ivar: _service
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)containedVariables;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSerializedRepresentation:(id)arg0 variableProvider:(id)arg1 parameter:(id)arg2 ;
-(id)initWithService:(id)arg0 homeIdentifier:(id)arg1 ;
-(id)serializedRepresentation;
// -(void)processWithContext:(id)arg0 userInputRequiredHandler:(id)arg1 valueHandler:(unk)arg2  ;


@end


#endif