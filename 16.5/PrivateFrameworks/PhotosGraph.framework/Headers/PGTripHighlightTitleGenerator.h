// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGTRIPHIGHLIGHTTITLEGENERATOR_H
#define PGTRIPHIGHLIGHTTITLEGENERATOR_H

@protocol PGEventEnrichment;


#import "PGTitleGenerator.h"

@interface PGTripHighlightTitleGenerator : PGTitleGenerator

@property (readonly, nonatomic) NSObject<PGEventEnrichment> *collection; // ivar: _collection


-(BOOL)_useSplitTimeTitlesIfNeeded;
-(id)_locationTitle;
-(id)initWithCollection:(id)arg0 titleGenerationContext:(id)arg1 ;
-(void)_generateTitleAndSubtitleWithResult:(id)arg0 ;


@end


#endif