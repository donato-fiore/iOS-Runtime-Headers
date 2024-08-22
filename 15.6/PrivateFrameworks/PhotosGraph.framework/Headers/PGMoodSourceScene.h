// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGMOODSOURCESCENE_H
#define PGMOODSOURCESCENE_H



#import "PGMoodSource.h"

@interface PGMoodSourceScene : PGMoodSource



+(BOOL)shouldUseSceneIdentifier:(id)arg0 ;
+(id)_plistName;
-(CGFloat)weight;
-(NSUInteger)_sourceInputCount;
-(void)_combineMoodVectorsWithGraph:(id)arg0 ;


@end


#endif