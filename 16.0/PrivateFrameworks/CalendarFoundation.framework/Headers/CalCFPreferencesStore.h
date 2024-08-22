// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALCFPREFERENCESSTORE_H
#define CALCFPREFERENCESSTORE_H

@protocol CalPreferencesStore;

#import <Foundation/Foundation.h>


@interface CalCFPreferencesStore : NSObject <CalPreferencesStore>





+(id)shared;
-(BOOL)getBoolean:(*BOOL)arg0 forDomain:(id)arg1 key:(id)arg2 ;
-(BOOL)getInteger:(*NSInteger)arg0 forDomain:(id)arg1 key:(id)arg2 ;
-(BOOL)getValue:(*id)arg0 forDomain:(id)arg1 key:(id)arg2 ;
-(void)setValue:(id)arg0 forDomain:(id)arg1 key:(id)arg2 ;
-(void)synchronizeDomain:(id)arg0 ;


@end


#endif