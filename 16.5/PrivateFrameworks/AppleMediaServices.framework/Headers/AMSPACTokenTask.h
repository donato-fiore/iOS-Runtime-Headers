// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSPACTOKENTASK_H
#define AMSPACTOKENTASK_H

@class NSData, NSString;


#import "AMSTask.h"

@interface AMSPACTokenTask : AMSTask

@property (retain) NSData *signingData; // ivar: _signingData
@property (readonly) NSString *simLabelID; // ivar: _simLabelID


+(id)signatureForSimLabelID:(id)arg0 fromSignatures:(id)arg1 ;
+(id)signatureMapFromServerSignatures:(id)arg0 ;
+(id)tokenForSimLabelID:(id)arg0 withQueue:(id)arg1 signingData:(id)arg2 ;
-(id)initWithSimLabelID:(id)arg0 ;
-(id)perform;


@end


#endif