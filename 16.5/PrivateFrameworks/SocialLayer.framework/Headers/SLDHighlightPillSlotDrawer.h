// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLDHIGHLIGHTPILLSLOTDRAWER_H
#define SLDHIGHLIGHTPILLSLOTDRAWER_H

@class NSString;
@protocol UISSlotDrawer;

#import <Foundation/Foundation.h>


@interface SLDHighlightPillSlotDrawer : NSObject <UISSlotDrawer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)drawingWithStyle:(id)arg0 tag:(id)arg1 forRemote:(BOOL)arg2 ;
-(struct CGImage *)imageWithStyle:(id)arg0 tag:(id)arg1 forRemote:(BOOL)arg2 ;


@end


#endif