// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFSHOWACTIONINTERFACEDIALOGRESPONSE_H
#define WFSHOWACTIONINTERFACEDIALOGRESPONSE_H

@class NSXPCListenerEndpoint, NSString;
@protocol NSSecureCoding;


#import "WFDialogResponse.h"

@interface WFShowActionInterfaceDialogResponse : WFDialogResponse <NSSecureCoding>



@property (readonly, nonatomic) NSXPCListenerEndpoint *listenerEndpoint; // ivar: _listenerEndpoint
@property (readonly, nonatomic, getter=isUnsupported) BOOL unsupported; // ivar: _unsupported
@property (readonly, nonatomic) NSString *userInterfaceType; // ivar: _userInterfaceType


+(BOOL)supportsSecureCoding;
-(BOOL)shouldDismissDialogInTransientMode;
-(id)description;
-(id)initWithCancelled:(BOOL)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithListenerEndpoint:(id)arg0 userInterfaceType:(id)arg1 ;
-(id)initWithUnsupported:(BOOL)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif