// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRIPBANY_H
#define TRIPBANY_H

@class NSString, NSData;


#import "TRIPBMessage.h"

@interface TRIPBAny : TRIPBMessage

@property (copy, nonatomic) NSString *typeURL;
@property (copy, nonatomic) NSData *value;


+(id)anyWithMessage:(id)arg0 error:(*id)arg1 ;
+(id)anyWithMessage:(id)arg0 typeURLPrefix:(id)arg1 error:(*id)arg2 ;
+(id)descriptor;
-(BOOL)packWithMessage:(id)arg0 error:(*id)arg1 ;
-(BOOL)packWithMessage:(id)arg0 typeURLPrefix:(id)arg1 error:(*id)arg2 ;
-(id)initWithMessage:(id)arg0 error:(*id)arg1 ;
-(id)initWithMessage:(id)arg0 typeURLPrefix:(id)arg1 error:(*id)arg2 ;
-(id)unpackMessageClass:(Class)arg0 error:(*id)arg1 ;


@end


#endif