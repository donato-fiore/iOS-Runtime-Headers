// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSENVIRONMENTDESCRIPTIONAPPLEINTERNALOPTIONS_H
#define SSENVIRONMENTDESCRIPTIONAPPLEINTERNALOPTIONS_H

@class NSString, RCPMovie;
@protocol BSXPCCoding;

#import <Foundation/Foundation.h>

#import "SSUIRunPPTServiceRequest.h"

@interface SSEnvironmentDescriptionAppleInternalOptions : NSObject <BSXPCCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) RCPMovie *recapMovie; // ivar: _recapMovie
@property (retain, nonatomic) SSUIRunPPTServiceRequest *runPPTServiceRequest; // ivar: _runPPTServiceRequest
@property (readonly) Class superclass;


-(id)initWithXPCDictionary:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif