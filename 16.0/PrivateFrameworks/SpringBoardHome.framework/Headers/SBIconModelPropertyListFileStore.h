// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBICONMODELPROPERTYLISTFILESTORE_H
#define SBICONMODELPROPERTYLISTFILESTORE_H

@class NSURL, NSString;
@protocol SBIconModelStore, BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface SBIconModelPropertyListFileStore : NSObject <SBIconModelStore, BSDescriptionProviding>



@property (readonly, copy, nonatomic) NSURL *currentIconStateURL; // ivar: _currentIconStateURL
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSURL *desiredIconStateURL; // ivar: _desiredIconStateURL
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_delete:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)_save:(id)arg0 url:(id)arg1 error:(*id)arg2 ;
-(BOOL)deleteCurrentIconStateWithOptions:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)deleteDesiredIconStateWithOptions:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)saveCurrentIconState:(id)arg0 error:(*id)arg1 ;
-(BOOL)saveDesiredIconState:(id)arg0 error:(*id)arg1 ;
-(id)_load:(id)arg0 error:(*id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithIconStateURL:(id)arg0 desiredIconStateURL:(id)arg1 ;
-(id)loadCurrentIconState:(*id)arg0 ;
-(id)loadDesiredIconState:(*id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif