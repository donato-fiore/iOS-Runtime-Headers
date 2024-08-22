// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HKSAMPLETYPEQUERY_H
#define _HKSAMPLETYPEQUERY_H

@class NSString;
@protocol HKSampleTypeQueryClientInterface;


#import "HKQuery.h"

@interface _HKSampleTypeQuery : HKQuery <HKSampleTypeQueryClientInterface>

 {
    id *_resultsHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)clientInterfaceProtocol;
+(void)configureClientInterface:(id)arg0 ;
-(id)initWithPredicate:(id)arg0 resultsHandler:(id)arg1 ;
-(void)client_deliverSampleTypes:(id)arg0 query:(id)arg1 ;
-(void)queue_deliverError:(id)arg0 ;


@end


#endif