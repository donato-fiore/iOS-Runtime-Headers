// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CPLRESOURCESMUTABLEARRAY_H
#define _CPLRESOURCESMUTABLEARRAY_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _CPLResourcesMutableArray : NSObject {
    NSMutableDictionary *_resourcesPerType;
    NSMutableDictionary *_updatedResourcesPerType;
}




-(id)allResources;
-(id)initWithResources:(id)arg0 ;
-(id)reallyUpdatedResources;
-(void)addResource:(id)arg0 ;


@end


#endif