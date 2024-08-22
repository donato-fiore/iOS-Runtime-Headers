// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLDCOLLABORATIONATTRIBUTIONVIEWSLOTDRAWER_H
#define SLDCOLLABORATIONATTRIBUTIONVIEWSLOTDRAWER_H

@class NSString;
@protocol UISSlotDrawer;

#import <Foundation/Foundation.h>


@interface SLDCollaborationAttributionViewSlotDrawer : NSObject <UISSlotDrawer>



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