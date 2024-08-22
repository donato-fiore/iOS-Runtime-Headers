// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SLDHIGHLIGHTDISAMBIGUATIONPILLSLOTDRAWER_H
#define SLDHIGHLIGHTDISAMBIGUATIONPILLSLOTDRAWER_H

@class NSString;
@protocol UISSlotDrawer;

#import <Foundation/Foundation.h>


@interface SLDHighlightDisambiguationPillSlotDrawer : NSObject <UISSlotDrawer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)resolvedStyleForStyle:(id)arg0 tag:(id)arg1 ;
-(NSUInteger)authenticationMessageContextForStyle:(id)arg0 tag:(id)arg1 ;
-(NSUInteger)hitTestInformationMaskForStyle:(id)arg0 tag:(id)arg1 ;
-(id)drawingWithStyle:(id)arg0 tag:(id)arg1 forRemote:(BOOL)arg2 ;
-(id)resolvedStyleForStyle:(id)arg0 tag:(id)arg1 ;


@end


#endif