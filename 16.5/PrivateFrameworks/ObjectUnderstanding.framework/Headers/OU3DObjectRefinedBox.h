// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OU3DOBJECTREFINEDBOX_H
#define OU3DOBJECTREFINEDBOX_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface OU3DObjectRefinedBox : NSObject

@property int frameIndex; // ivar: frameIndex
@property BOOL isOutlier; // ivar: isOutlier
@property (retain) NSArray *preRefinedBox; // ivar: _preRefinedBox
@property (retain) NSArray *refinedBox; // ivar: _refinedBox


-(id)init;


@end


#endif