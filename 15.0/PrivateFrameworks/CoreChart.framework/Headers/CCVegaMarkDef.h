// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CCVEGAMARKDEF_H
#define CCVEGAMARKDEF_H

@protocol CCVegaMarkDefInterface;

#import <Foundation/Foundation.h>

#import "CCVegaCARenderer.h"

@interface CCVegaMarkDef : NSObject <CCVegaMarkDefInterface>



@property (weak) CCVegaCARenderer *delegate; // ivar: delegate


-(BOOL)isMultiItemMark;
-(id)enterMark:(id)arg0 ;
-(id)enterMultiMark:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(id)updateMark:(id)arg0 ;
-(id)updateMultiMark:(id)arg0 ;
-(struct CGRect )accessibilityFrameForMark:(id)arg0 layer:(id)arg1 ;


@end


#endif