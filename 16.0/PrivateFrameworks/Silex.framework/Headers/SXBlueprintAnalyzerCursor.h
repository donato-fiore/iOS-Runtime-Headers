// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXBLUEPRINTANALYZERCURSOR_H
#define SXBLUEPRINTANALYZERCURSOR_H

@class NSArray, NSMutableArray;

#import <Foundation/Foundation.h>


@interface SXBlueprintAnalyzerCursor : NSObject {
    CGFloat _highestMaxY;
    NSArray *_path;
    NSMutableArray *_mutablePath;
}




-(id)init;


@end


#endif