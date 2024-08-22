// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PVSCENETAXONOMY_H
#define PVSCENETAXONOMY_H

@class NSString, PFSceneTaxonomy;

#import <Foundation/Foundation.h>

#import "PVSceneTaxonomyNode.h"

@interface PVSceneTaxonomy : NSObject

@property (readonly) PVSceneTaxonomyNode *rootNode;
@property (readonly, copy) NSString *sha256Hash; // ivar: _sha256Hash
@property (retain) PFSceneTaxonomy *taxonomy; // ivar: _taxonomy


+(id)sharedTaxonomy;
-(id)description;
-(id)init;
-(id)initWithGraphURL:(id)arg0 localizationBundle:(id)arg1 tableName:(id)arg2 ;
-(id)nodeForName:(id)arg0 ;
-(id)nodeForSceneClassId:(unsigned int)arg0 ;


@end


#endif