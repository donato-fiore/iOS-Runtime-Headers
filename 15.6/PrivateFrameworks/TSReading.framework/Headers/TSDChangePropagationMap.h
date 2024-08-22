// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDCHANGEPROPAGATIONMAP_H
#define TSDCHANGEPROPAGATIONMAP_H

@class TSUNoCopyDictionary, NSMutableSet, NSString;
@protocol TSDChangePropagationMap;

#import <Foundation/Foundation.h>


@interface TSDChangePropagationMap : NSObject <TSDChangePropagationMap>

 {
    TSUNoCopyDictionary *mDictionary;
    NSMutableSet *mClassesOfChangedPrototypes;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)hasAnyChangesForPrototypesOfClasses:(id)arg0 ;
-(id)init;
-(id)prototypeChangeForPrototype:(id)arg0 ;
-(id)prototypePassingTest:(id)arg0 ;
-(void)dealloc;
-(void)p_addClassesForPrototype:(id)arg0 ;
-(void)recordDeleteChangeForPrototype:(id)arg0 replacement:(id)arg1 ;
-(void)recordModifyChangeForPrototype:(id)arg0 property:(int)arg1 oldBoxedValue:(id)arg2 newBoxedValue:(id)arg3 ;
-(void)recordNewValueForModifyChangeForPrototype:(id)arg0 property:(int)arg1 newBoxedValue:(id)arg2 ;
-(void)recordOldValueForModifyChangeForPrototype:(id)arg0 property:(int)arg1 oldBoxedValue:(id)arg2 ;
-(void)recordReplacementChangeForPrototype:(id)arg0 replacement:(id)arg1 ;


@end


#endif