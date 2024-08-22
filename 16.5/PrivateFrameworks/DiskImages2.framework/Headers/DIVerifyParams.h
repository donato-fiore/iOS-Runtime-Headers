// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DIVERIFYPARAMS_H
#define DIVERIFYPARAMS_H



#import "DIBaseParams.h"

@interface DIVerifyParams : DIBaseParams



+(BOOL)supportsSecureCoding;
-(BOOL)verifyWithError:(*id)arg0 ;
-(id)initWithURL:(id)arg0 error:(*id)arg1 ;
-(id)initWithURL:(id)arg0 shadowURLs:(id)arg1 error:(*id)arg2 ;


@end


#endif