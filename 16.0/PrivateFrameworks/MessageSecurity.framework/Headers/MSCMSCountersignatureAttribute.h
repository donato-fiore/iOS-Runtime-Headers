// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSCMSCOUNTERSIGNATUREATTRIBUTE_H
#define MSCMSCOUNTERSIGNATUREATTRIBUTE_H

@class NSArray;
@protocol MSCMSAttributeCoder;

#import <Foundation/Foundation.h>


@interface MSCMSCountersignatureAttribute : NSObject <MSCMSAttributeCoder>



@property (readonly, retain) NSArray *signerInfoSet; // ivar: _signerInfoSet


-(BOOL)verifyCountersignatures:(id)arg0 error:(*id)arg1 ;
-(BOOL)verifyCountersignaturesAndCountersignersWithPolicies:(id)arg0 verifyTime:(id)arg1 signature:(id)arg2 error:(*id)arg3 ;
-(id)encodeAttributeWithError:(*id)arg0 ;
-(id)initWithAttribute:(id)arg0 LAContext:(id)arg1 error:(*id)arg2 ;
-(id)initWithAttribute:(id)arg0 error:(*id)arg1 ;
-(id)initWithSignerInfo:(id)arg0 ;
-(void)addSignerInfo:(id)arg0 ;


@end


#endif