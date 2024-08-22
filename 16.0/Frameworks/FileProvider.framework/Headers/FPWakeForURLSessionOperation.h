// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FPWAKEFORURLSESSIONOPERATION_H
#define FPWAKEFORURLSESSIONOPERATION_H

@class NSString;


#import "FPActionOperation.h"

@interface FPWakeForURLSessionOperation : FPActionOperation {
    NSString *_sessionIdentifier;
}




-(id)initForProvider:(id)arg0 sessionIdentifier:(id)arg1 ;
-(void)actionMain;


@end


#endif