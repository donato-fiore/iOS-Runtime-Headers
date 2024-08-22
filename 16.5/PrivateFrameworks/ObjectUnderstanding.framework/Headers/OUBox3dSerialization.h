// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OUBOX3DSERIALIZATION_H
#define OUBOX3DSERIALIZATION_H


#import <Foundation/Foundation.h>


@interface OUBox3dSerialization : NSObject



-(?)dictionaryFromBoxes3d;
-(?)dictionaryFromBoxes3dPointCloudpointCloud;
-(id)dictionaryFromBox3d:(struct OUBox3d )arg0 ;
-(id)pointCloudFromDictionary:(id)arg0 ;
-(struct OUBox3d )box3dFromDictionary:(id)arg0 ;
-(struct vector<OUBox3d, std::allocator<OUBox3d>> )boxes3dFromDictionary:(id)arg0 ;


@end


#endif