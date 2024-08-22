// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFUIKITPARAMETEREDITINGREQUEST_H
#define WFUIKITPARAMETEREDITINGREQUEST_H

@class WFParameter;
@protocol NSSecureCoding, WFParameterState;

#import <Foundation/Foundation.h>


@interface WFUIKitParameterEditingRequest : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSObject<WFParameterState> *currentState; // ivar: _currentState
@property (readonly, nonatomic) WFParameter *parameter; // ivar: _parameter


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithParameter:(id)arg0 currentState:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif