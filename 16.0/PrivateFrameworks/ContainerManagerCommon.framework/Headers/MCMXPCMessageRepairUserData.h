// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCMXPCMESSAGEREPAIRUSERDATA_H
#define MCMXPCMESSAGEREPAIRUSERDATA_H

@class NSURL;
@protocol MCMParametersRepairUserData;


#import "MCMXPCMessageBase.h"

@interface MCMXPCMessageRepairUserData : MCMXPCMessageBase <MCMParametersRepairUserData>



@property (readonly, nonatomic) char * sandboxToken; // ivar: _sandboxToken
@property (readonly, nonatomic) NSURL *url; // ivar: _url


-(id)initWithXPCObject:(id)arg0 context:(id)arg1 error:(*NSUInteger)arg2 ;
-(unsigned int)disposition;
-(void)dealloc;


@end


#endif