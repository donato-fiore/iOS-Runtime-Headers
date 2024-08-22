// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKVSIMULATEDPRIORRETRIEVER_H
#define CKVSIMULATEDPRIORRETRIEVER_H

@class NSDictionary, NSString;
@protocol CKVPriorRetriever;

#import <Foundation/Foundation.h>


@interface CKVSimulatedPriorRetriever : NSObject <CKVPriorRetriever>

 {
    NSDictionary *_simulatedPriors;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)getPriorInfoForContactIds:(id)arg0 ;
-(id)init;
-(id)initWithSimulatedPriors:(id)arg0 ;


@end


#endif