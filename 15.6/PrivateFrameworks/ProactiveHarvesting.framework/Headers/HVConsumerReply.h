// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HVCONSUMERREPLY_H
#define HVCONSUMERREPLY_H

@class NSNumber, NSError;

#import <Foundation/Foundation.h>


@interface HVConsumerReply : NSObject

@property (retain, nonatomic) NSNumber *contentWasProcessed; // ivar: _contentWasProcessed
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) NSNumber *numberOfExtractions; // ivar: _numberOfExtractions
@property (nonatomic) BOOL success; // ivar: _success


+(id)failedWithError:(id)arg0 ;
+(id)ignored;
+(id)interrupted;
+(id)successWithNumberOfExtractions:(id)arg0 ;
-(id)init;
-(id)initWithSuccess:(BOOL)arg0 contentWasProcessed:(id)arg1 numberOfExtractions:(id)arg2 error:(id)arg3 ;


@end


#endif