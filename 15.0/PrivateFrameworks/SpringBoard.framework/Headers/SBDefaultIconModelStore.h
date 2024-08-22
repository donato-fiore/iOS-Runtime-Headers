// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBDEFAULTICONMODELSTORE_H
#define SBDEFAULTICONMODELSTORE_H

@class SBIconModelPropertyListFileStore;



@interface SBDefaultIconModelStore : SBIconModelPropertyListFileStore



+(id)sharedInstance;
-(BOOL)deleteDesiredIconStateWithOptions:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)saveDesiredIconState:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)loadCurrentIconState:(*id)arg0 ;
-(id)loadDesiredIconState:(*id)arg0 ;
-(void)_deleteLegacyState;


@end


#endif