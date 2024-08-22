// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTSTICKERMORPHEROVERRIDE_H
#define AVTSTICKERMORPHEROVERRIDE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AVTStickerMorpherOverride : NSObject

@property (readonly, copy, nonatomic) NSString *morpher; // ivar: _morpher
@property (readonly, copy, nonatomic) id *nodeNames; // ivar: _nodeNames
@property (readonly, nonatomic) float value; // ivar: _value


+(id)morpherOverrideFromDictionary:(id)arg0 ;
-(id)description;
-(id)initWithNodeNames:(id)arg0 morpher:(id)arg1 value:(float)arg2 ;
-(void)applyToHierarchy:(id)arg0 reversionContext:(id)arg1 ;


@end


#endif