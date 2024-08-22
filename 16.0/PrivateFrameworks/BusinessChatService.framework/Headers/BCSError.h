// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BCSERROR_H
#define BCSERROR_H

@class NSError;



@interface BCSError : NSError



+(id)errorWithDomain:(id)arg0 code:(NSInteger)arg1 errorDescription:(id)arg2 ;
+(id)errorWithDomain:(id)arg0 code:(NSInteger)arg1 errorDescription:(id)arg2 localizedDescription:(id)arg3 ;
+(id)errorWithError:(id)arg0 ;
-(id)errorDescription;
-(id)initWithError:(id)arg0 ;
-(id)localizedDescription;


@end


#endif