// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OUBOX3DSERIALIZATION_H
#define OUBOX3DSERIALIZATION_H


#import <Foundation/Foundation.h>


@interface OUBox3dSerialization : NSObject



-(?)boxes3dFromDictionary;
-(?)dictionaryFromBoxes3dPointCloudpointCloud;
-(id)dictionaryFromBox3d:(struct OUBox3d )arg0 ;
-(id)dictionaryFromBoxes3d:(struct vector<OUBox3d, std::allocator<OUBox3d>> )arg0 ;
-(id)pointCloudFromDictionary:(id)arg0 ;
-(struct OUBox3d )box3dFromDictionary:(id)arg0 ;


@end


#endif