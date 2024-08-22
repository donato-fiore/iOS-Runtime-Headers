// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXMTAXONOMYNODE_H
#define AXMTAXONOMYNODE_H

@class NSMutableSet, NSString;

#import <Foundation/Foundation.h>


@interface AXMTaxonomyNode : NSObject

@property (nonatomic) CGFloat confidence; // ivar: _confidence
@property (retain, nonatomic) NSMutableSet *detectorSceneClassIds; // ivar: _detectorSceneClassIds
@property (retain, nonatomic) NSString *label; // ivar: _label
@property (retain, nonatomic) NSString *localizedName; // ivar: _localizedName
@property (nonatomic) unsigned int sceneClassId; // ivar: _sceneClassId




@end


#endif