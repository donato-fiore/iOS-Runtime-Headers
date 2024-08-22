// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGSEARCHMETADATACOMPUTER_H
#define PGSEARCHMETADATACOMPUTER_H


#import <Foundation/Foundation.h>

#import "PGGraph.h"

@interface PGSearchMetadataComputer : NSObject

@property (readonly) PGGraph *graph; // ivar: _graph


-(id)_blockedMeaningsByMeaning;
-(id)_mePersonUUID;
-(id)_suggestableLocalizedSceneNames;
-(id)initWithGraph:(id)arg0 ;
-(id)searchMetadataWithOptions:(id)arg0 ;


@end


#endif