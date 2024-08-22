// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EARKEYWORDFINDERRESULT_H
#define EARKEYWORDFINDERRESULT_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface EARKeywordFinderResult : NSObject

@property (readonly, copy, nonatomic) NSArray *correctedUtterances; // ivar: _correctedUtterances


-(id)_initWithCorrectedUtterances:(id)arg0 ;
-(id)description;


@end


#endif