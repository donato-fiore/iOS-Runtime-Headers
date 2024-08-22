// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFWORKFLOWAUTHORIZATIONCONFIGURATION_H
#define WFWORKFLOWAUTHORIZATIONCONFIGURATION_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFWorkflowAuthorizationConfiguration : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *localizedMessage; // ivar: _localizedMessage
@property (readonly, copy, nonatomic) NSString *localizedPrompt; // ivar: _localizedPrompt


+(BOOL)supportsSecureCoding;
-(id)authorizationDialogRequestWithAttribution:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)siriDialogAlertWithCompletionHandler:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif