// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASVBLENDABLESPLINEGROUP_H
#define ASVBLENDABLESPLINEGROUP_H

@class NSMutableArray, NSArray;

#import <Foundation/Foundation.h>


@interface ASVBlendableSplineGroup : NSObject {
    NSMutableArray *_controlPoints;
    vector<ASVPatchData, std::allocator<ASVPatchData>> _patchData;
    vector<unsigned short, std::allocator<unsigned short>> _indices;
}


@property (readonly, nonatomic) NSArray *controlPoints;
@property (readonly, nonatomic) *unsigned short indices;
@property (readonly, nonatomic) unsigned int numIndices;
@property (readonly, nonatomic) *? patchData;
@property (readonly, nonatomic) unsigned int patchDataLength;


-(id)initWithSplineGroups:(id)arg0 ;


@end


#endif