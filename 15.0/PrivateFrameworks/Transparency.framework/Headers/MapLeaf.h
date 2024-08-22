// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MAPLEAF_H
#define MAPLEAF_H

@class NSMutableArray;
@protocol TransparencyVerifiable;

#import <Foundation/Foundation.h>

#import "GPBMessage.h"

@interface MapLeaf : GPBMessage <TransparencyVerifiable>



@property (retain, nonatomic) NSMutableArray *accountsArray;
@property (readonly, nonatomic) NSUInteger accountsArray_Count;
@property (retain) NSObject *verifier;


+(id)descriptor;
-(NSUInteger)verifyWithError:(*id)arg0 ;
-(id)recordForAccountId:(id)arg0 deviceIdVRFOutput:(id)arg1 appVersion:(NSUInteger)arg2 clientDataVRFoutput:(id)arg3 ;


@end


#endif