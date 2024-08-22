// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFASKPARAMETERDIALOGRESPONSE_H
#define WFASKPARAMETERDIALOGRESPONSE_H

@protocol NSSecureCoding, WFPropertyListObject;


#import "WFDialogResponse.h"

@interface WFAskParameterDialogResponse : WFDialogResponse <NSSecureCoding>



@property (readonly, nonatomic) NSObject<WFPropertyListObject> *serializedParameterState; // ivar: _serializedParameterState


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSerializedParameterState:(id)arg0 cancelled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif