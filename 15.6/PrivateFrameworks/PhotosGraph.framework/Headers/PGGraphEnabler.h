// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGRAPHENABLER_H
#define PGGRAPHENABLER_H


#import <Foundation/Foundation.h>

#import "PGGraph.h"

@interface PGGraphEnabler : NSObject

@property (readonly) PGGraph *graph; // ivar: _graph


-(BOOL)locationIsFrequent:(id)arg0 ;
-(BOOL)locationIsNearMyHomeOrWork:(id)arg0 ;
-(id)_momentsForHobbyType:(NSInteger)arg0 inPhotoLibrary:(id)arg1 ;
-(id)initWithGraph:(id)arg0 ;
-(id)momentsForBabyInPhotoLibrary:(id)arg0 ;
-(id)momentsForPetInPhotoLibrary:(id)arg0 ;


@end


#endif