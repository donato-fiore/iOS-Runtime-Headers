// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CVABACKGROUNDREQUESTIMPLBASE_H
#define CVABACKGROUNDREQUESTIMPLBASE_H

@class NSString;
@protocol CVABackgroundRequest;

#import <Foundation/Foundation.h>

#import "CVAMattingRequest.h"

@interface CVABackgroundRequestImplBase : NSObject <CVABackgroundRequest>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) CVAMattingRequest *mattingRequest; // ivar: _mattingRequest
@property (readonly) Class superclass;




@end


#endif