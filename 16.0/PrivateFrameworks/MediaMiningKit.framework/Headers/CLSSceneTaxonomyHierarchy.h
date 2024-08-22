// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSSCENETAXONOMYHIERARCHY_H
#define CLSSCENETAXONOMYHIERARCHY_H

@class PFSceneTaxonomy;

#import <Foundation/Foundation.h>


@interface CLSSceneTaxonomyHierarchy : NSObject {
    PFSceneTaxonomy *_sceneTaxonomy;
}




-(BOOL)nodeExistsForName:(id)arg0 ;
-(id)init;
-(id)nodeForIdentifier:(unsigned int)arg0 ;
-(id)nodeForName:(id)arg0 ;
-(id)rootNode;


@end


#endif