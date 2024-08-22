// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRLMFILTERINGTHRESHOLDS_H
#define CRLMFILTERINGTHRESHOLDS_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface CRLMFilteringThresholds : NSObject

@property (readonly) float activationThreshold; // ivar: _activationThreshold
@property (retain) NSArray *charLengths; // ivar: _charLengths
@property (retain) NSArray *lmThresholds; // ivar: _lmThresholds
@property (readonly) NSInteger minimumLength; // ivar: _minimumLength


-(float)lmThresholdForLength:(NSInteger)arg0 ;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif