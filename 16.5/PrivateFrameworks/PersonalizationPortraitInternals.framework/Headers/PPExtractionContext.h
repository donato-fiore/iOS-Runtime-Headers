// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPEXTRACTIONCONTEXT_H
#define PPEXTRACTIONCONTEXT_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface PPExtractionContext : NSObject {
    NSDictionary *_probabilities;
}




-(CGFloat)probabilityForDomain:(unsigned int)arg0 ;
-(id)initWithProbabilities:(id)arg0 ;


@end


#endif