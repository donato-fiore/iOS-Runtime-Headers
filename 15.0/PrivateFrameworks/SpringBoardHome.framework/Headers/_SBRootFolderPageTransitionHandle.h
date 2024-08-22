// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SBROOTFOLDERPAGETRANSITIONHANDLE_H
#define _SBROOTFOLDERPAGETRANSITIONHANDLE_H

@class NSString;
@protocol SBRootFolderPageTransition, BSDescriptionProviding;

#import <Foundation/Foundation.h>

#import "SBRootFolderController.h"

@interface _SBRootFolderPageTransitionHandle : NSObject <SBRootFolderPageTransition, BSDescriptionProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger destinationPageState; // ivar: _destinationPageState
@property (readonly, nonatomic) SBRootFolderController *folderController; // ivar: _folderController
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat pageTransitionProgress; // ivar: _pageTransitionProgress
@property (readonly, copy, nonatomic) NSString *reason; // ivar: _reason
@property (nonatomic) NSInteger sourcePageState; // ivar: _sourcePageState
@property (readonly) Class superclass;
@property (nonatomic, getter=isValid) BOOL valid; // ivar: _valid


-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithFolderController:(id)arg0 destinationPageState:(NSInteger)arg1 reason:(id)arg2 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)endTransitionSuccessfully:(BOOL)arg0 ;
-(void)setTransitionProgress:(CGFloat)arg0 ;


@end


#endif