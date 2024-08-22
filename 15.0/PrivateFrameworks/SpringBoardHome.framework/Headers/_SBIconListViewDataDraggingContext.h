// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SBICONLISTVIEWDATADRAGGINGCONTEXT_H
#define _SBICONLISTVIEWDATADRAGGINGCONTEXT_H

@class NSString;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>

#import "SBIconView.h"

@interface _SBIconListViewDataDraggingContext : NSObject <BSDescriptionProviding>



@property (readonly, nonatomic) BOOL allowsMoveOperation; // ivar: _allowsMoveOperation
@property (readonly, nonatomic) NSString *bestAvailableUTI; // ivar: _bestAvailableUTI
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger fileOptions; // ivar: _fileOptions
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SBIconView *iconView; // ivar: _iconView
@property (readonly) Class superclass;


-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithIconView:(id)arg0 bestUTI:(id)arg1 allowsMoveOperation:(BOOL)arg2 fileOptions:(NSInteger)arg3 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif