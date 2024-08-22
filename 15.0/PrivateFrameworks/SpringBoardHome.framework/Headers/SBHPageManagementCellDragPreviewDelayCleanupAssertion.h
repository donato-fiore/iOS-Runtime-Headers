// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBHPAGEMANAGEMENTCELLDRAGPREVIEWDELAYCLEANUPASSERTION_H
#define SBHPAGEMANAGEMENTCELLDRAGPREVIEWDELAYCLEANUPASSERTION_H

@class NSString;
@protocol BSInvalidatable, BSDescriptionProviding;

#import <Foundation/Foundation.h>

#import "SBHPageManagementCellDragPreview.h"

@interface SBHPageManagementCellDragPreviewDelayCleanupAssertion : NSObject <BSInvalidatable, BSDescriptionProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) SBHPageManagementCellDragPreview *dragPreview; // ivar: _dragPreview
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isInvalidated) BOOL invalidated; // ivar: _invalidated
@property (readonly, copy, nonatomic) NSString *reason; // ivar: _reason
@property (readonly) Class superclass;


-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithDragPreview:(id)arg0 reason:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)dealloc;
-(void)invalidate;


@end


#endif