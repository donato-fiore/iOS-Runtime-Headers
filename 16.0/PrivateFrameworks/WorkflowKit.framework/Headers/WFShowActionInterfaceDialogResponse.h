// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFSHOWACTIONINTERFACEDIALOGRESPONSE_H
#define WFSHOWACTIONINTERFACEDIALOGRESPONSE_H

@class WFDialogResponse, NSString, NSXPCListenerEndpoint;
@protocol BSXPCSecureCoding, NSSecureCoding;



@interface WFShowActionInterfaceDialogResponse : WFDialogResponse <BSXPCSecureCoding, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSXPCListenerEndpoint *listenerEndpoint; // ivar: _listenerEndpoint
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isUnsupported) BOOL unsupported; // ivar: _unsupported
@property (readonly, nonatomic) NSString *userInterfaceType; // ivar: _userInterfaceType


+(BOOL)supportsBSXPCSecureCoding;
+(BOOL)supportsSecureCoding;
-(BOOL)shouldDismissDialogInTransientMode;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithCancelled:(BOOL)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithListenerEndpoint:(id)arg0 userInterfaceType:(id)arg1 ;
-(id)initWithUnsupported:(BOOL)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif