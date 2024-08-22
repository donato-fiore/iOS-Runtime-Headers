// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKTOOLFROMPALETTETOOL_H
#define PKTOOLFROMPALETTETOOL_H

@protocol PKPaletteTool;

#import <Foundation/Foundation.h>

#import "PKTool.h"

@interface PKToolFromPaletteTool : NSObject {
    id<PKPaletteTool> *_paletteTool;
}


@property (readonly, nonatomic) PKTool *tool;


-(id)initWithPaletteTool:(id)arg0 ;


@end


#endif