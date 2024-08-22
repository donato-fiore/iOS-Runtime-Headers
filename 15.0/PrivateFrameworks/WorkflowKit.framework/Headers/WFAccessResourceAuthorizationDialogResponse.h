// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFACCESSRESOURCEAUTHORIZATIONDIALOGRESPONSE_H
#define WFACCESSRESOURCEAUTHORIZATIONDIALOGRESPONSE_H

@class NSData;


#import "WFRequestAuthorizationDialogResponse.h"

@interface WFAccessResourceAuthorizationDialogResponse : WFRequestAuthorizationDialogResponse

@property (readonly, copy, nonatomic) NSData *accessResourceStateData; // ivar: _accessResourceStateData
@property (readonly, nonatomic) BOOL isAuthorized;


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithAuthorized:(BOOL)arg0 accessResourceStateData:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithResponseCode:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif