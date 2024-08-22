// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSENVIRONMENTDESCRIPTIONAPPLEINTERNALOPTIONS_H
#define SSENVIRONMENTDESCRIPTIONAPPLEINTERNALOPTIONS_H

@class NSString, RCPMovie;
@protocol BSXPCSecureCoding;

#import <Foundation/Foundation.h>

#import "SSUIRunPPTServiceRequest.h"

@interface SSEnvironmentDescriptionAppleInternalOptions : NSObject <BSXPCSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) RCPMovie *recapMovie; // ivar: _recapMovie
@property (retain, nonatomic) SSUIRunPPTServiceRequest *runPPTServiceRequest; // ivar: _runPPTServiceRequest
@property (readonly) Class superclass;


+(BOOL)supportsBSXPCSecureCoding;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;


@end


#endif