// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SBFOLDERCONTROLLERICONIMAGEVIEWCONTROLLERKEEPSNAPSHOTASSERTION_H
#define _SBFOLDERCONTROLLERICONIMAGEVIEWCONTROLLERKEEPSNAPSHOTASSERTION_H

@class NSString, NSIndexSet;
@protocol BSInvalidatable, BSDescriptionProviding;

#import <Foundation/Foundation.h>

#import "SBFolderController.h"

@interface _SBFolderControllerIconImageViewControllerKeepSnapshotAssertion : NSObject <BSInvalidatable, BSDescriptionProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) SBFolderController *folderController; // ivar: _folderController
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isInvalidated) BOOL invalidated; // ivar: _invalidated
@property (readonly, copy, nonatomic) NSIndexSet *pageIndexesToExclude; // ivar: _pageIndexesToExclude
@property (readonly, copy, nonatomic) NSString *reason; // ivar: _reason
@property (readonly, nonatomic) NSUInteger snapshotType; // ivar: _snapshotType
@property (readonly) Class superclass;


-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithFolderController:(id)arg0 snapshotType:(NSUInteger)arg1 pageIndexesToExclude:(id)arg2 reason:(id)arg3 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)dealloc;
-(void)invalidate;


@end


#endif