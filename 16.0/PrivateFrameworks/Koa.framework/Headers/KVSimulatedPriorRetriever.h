// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KVSIMULATEDPRIORRETRIEVER_H
#define KVSIMULATEDPRIORRETRIEVER_H

@class NSDictionary, NSString;
@protocol KVPriorRetriever;

#import <Foundation/Foundation.h>


@interface KVSimulatedPriorRetriever : NSObject <KVPriorRetriever>

 {
    NSDictionary *_simulatedPriors;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)allPriorInfoWithThreshold:(unsigned int)arg0 ;
-(id)init;
-(id)initWithSimulatedPriors:(id)arg0 ;
-(id)priorInfoForItemIds:(id)arg0 ;


@end


#endif