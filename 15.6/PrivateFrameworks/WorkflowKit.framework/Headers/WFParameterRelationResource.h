// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFPARAMETERRELATIONRESOURCE_H
#define WFPARAMETERRELATIONRESOURCE_H

@class NSString;
@protocol WFActionEventObserver;


#import "WFResource.h"
#import "WFAction.h"

@interface WFParameterRelationResource : WFResource <WFActionEventObserver>



@property (weak, nonatomic) WFAction *action; // ivar: _action
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *parameterKey;
@property (readonly) Class superclass;


+(BOOL)mustBeAvailableForDisplay;
-(id)comparedValues;
-(id)initWithParameterKey:(id)arg0 parameterValues:(id)arg1 relation:(id)arg2 ;
-(void)action:(id)arg0 parameterStateDidChangeForKey:(id)arg1 ;
-(void)refreshAvailability;
-(void)setupWithAction:(id)arg0 ;


@end


#endif