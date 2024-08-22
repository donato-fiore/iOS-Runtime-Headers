// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFREQUESTAUTHORIZATIONDIALOGRESPONSE_H
#define WFREQUESTAUTHORIZATIONDIALOGRESPONSE_H



#import "WFDialogResponse.h"

@interface WFRequestAuthorizationDialogResponse : WFDialogResponse

@property (readonly, nonatomic) NSUInteger result; // ivar: _result


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithResponseCode:(NSInteger)arg0 ;
-(id)initWithResult:(NSUInteger)arg0 ;
-(id)initWithResult:(NSUInteger)arg0 cancelled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif