// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NLDATAENUMERATOR_H
#define NLDATAENUMERATOR_H

@class NSMutableData;

#import <Foundation/Foundation.h>

#import "NLDataProvider.h"
#import "NLNumberGenerator.h"

@interface NLDataEnumerator : NSObject {
    NLDataProvider *_dataProvider;
    NSUInteger _idx;
    NLNumberGenerator *_generator;
    NSMutableData *_shuffleData;
}


@property (readonly, retain) NLDataProvider *dataProvider;
@property (readonly) NSUInteger index;


-(id)initWithDataProvider:(id)arg0 ;
-(id)initWithDataProvider:(id)arg0 numberGenerator:(id)arg1 ;
-(id)instanceAtIndex:(NSUInteger)arg0 ;
-(id)nextInstance;
-(void)rewind;
-(void)rewindAndShuffle:(BOOL)arg0 ;
-(void)shuffle;


@end


#endif