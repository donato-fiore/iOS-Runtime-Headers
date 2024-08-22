// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGSPECBASEDHIGHLIGHTTITLEGENERATOR_H
#define PGSPECBASEDHIGHLIGHTTITLEGENERATOR_H

@class NSString;


#import "PGTitleGenerator.h"

@interface PGSpecBasedHighlightTitleGenerator : PGTitleGenerator

@property (readonly, nonatomic) BOOL createVerboseTitle; // ivar: _createVerboseTitle
@property (readonly, nonatomic) NSString *meaningLabel; // ivar: _meaningLabel


-(id)initWithCollection:(id)arg0 meaningLabel:(id)arg1 createVerboseTitle:(BOOL)arg2 titleGenerationContext:(id)arg3 ;
-(id)initWithMomentNodes:(id)arg0 meaningLabel:(id)arg1 createVerboseTitle:(BOOL)arg2 titleGenerationContext:(id)arg3 ;
-(void)_generateTitleAndSubtitleWithResult:(id)arg0 ;


@end


#endif