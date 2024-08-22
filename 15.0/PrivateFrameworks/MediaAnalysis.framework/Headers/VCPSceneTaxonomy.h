// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCPSCENETAXONOMY_H
#define VCPSCENETAXONOMY_H

@class PVSceneTaxonomy;

#import <Foundation/Foundation.h>


@interface VCPSceneTaxonomy : NSObject {
    PVSceneTaxonomy *_sceneTaxonomy;
}




+(id)sharedTaxonomy;
-(id)init;
-(id)sceneIdFromSceneName:(id)arg0 ;
-(id)sceneNameFromSceneId:(unsigned int)arg0 ;


@end


#endif