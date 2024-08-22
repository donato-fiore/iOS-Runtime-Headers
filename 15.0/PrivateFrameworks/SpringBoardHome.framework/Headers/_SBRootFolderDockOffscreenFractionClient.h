// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SBROOTFOLDERDOCKOFFSCREENFRACTIONCLIENT_H
#define _SBROOTFOLDERDOCKOFFSCREENFRACTIONCLIENT_H

@class NSString;
@protocol SBDockOffscreenFractionModifying, BSDescriptionProviding;

#import <Foundation/Foundation.h>

#import "SBRootFolderView.h"

@interface _SBRootFolderDockOffscreenFractionClient : NSObject <SBDockOffscreenFractionModifying, BSDescriptionProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat desiredOffscreenFraction; // ivar: _desiredOffscreenFraction
@property (retain, nonatomic) SBRootFolderView *folderView; // ivar: _folderView
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *reason; // ivar: _reason
@property (readonly) Class superclass;


-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithFolderView:(id)arg0 reason:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)dealloc;
-(void)invalidate;
-(void)layoutIfNeededForDockOffscreenFractionChanged;
-(void)setDockOffscreenFraction:(CGFloat)arg0 ;


@end


#endif