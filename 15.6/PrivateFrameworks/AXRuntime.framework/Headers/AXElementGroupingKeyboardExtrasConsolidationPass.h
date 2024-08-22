// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXELEMENTGROUPINGKEYBOARDEXTRASCONSOLIDATIONPASS_H
#define AXELEMENTGROUPINGKEYBOARDEXTRASCONSOLIDATIONPASS_H

@class NSString;
@protocol AXElementGroupingTransformationPass;

#import <Foundation/Foundation.h>


@interface AXElementGroupingKeyboardExtrasConsolidationPass : NSObject <AXElementGroupingTransformationPass>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldTransformGroup:(id)arg0 forGrouper:(id)arg1 ;
-(id)transformGroup:(id)arg0 forGrouper:(id)arg1 ;


@end


#endif