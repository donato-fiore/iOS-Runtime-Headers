// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IDSMAPLEAF_H
#define IDSMAPLEAF_H

@class NSMutableArray;
@protocol TransparencyVerifiable, TLSMessage;

#import <Foundation/Foundation.h>

#import "TLSMessage.h"

@interface IdsMapLeaf : TLSMessage <TransparencyVerifiable, TLSMessage>



@property (retain) NSMutableArray *accountsArray; // ivar: _accountsArray
@property (retain) NSMutableArray *extensions; // ivar: _extensions
@property (retain) NSObject *verifier;


+(id)parseFromData:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)verifyWithError:(*id)arg0 ;
-(id)data;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)recordForAccountKeyHash:(id)arg0 deviceIdHash:(id)arg1 appVersion:(NSUInteger)arg2 clientDataHash:(id)arg3 ;


@end


#endif