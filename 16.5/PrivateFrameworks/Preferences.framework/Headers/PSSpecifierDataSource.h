// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSSPECIFIERDATASOURCE_H
#define PSSPECIFIERDATASOURCE_H

@class NSMutableSet, NSString, NSMutableArray;
@protocol PSSpecifierDataSource;

#import <Foundation/Foundation.h>


@interface PSSpecifierDataSource : NSObject <PSSpecifierDataSource>

 {
    NSMutableSet *_observerRefs;
    BOOL _specifiersLoaded;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableArray *specifiers; // ivar: _specifiers
@property (readonly) Class superclass;


+(id)loadSpecifiersFromPlist:(id)arg0 inBundle:(id)arg1 target:(id)arg2 stringsTable:(id)arg3 ;
+(id)sharedInstance;
-(BOOL)areSpecifiersLoaded;
-(id)init;
-(id)observers;
-(id)observersOfClass:(Class)arg0 ;
-(id)readPreferenceValue:(id)arg0 ;
-(id)specifierForID:(id)arg0 ;
-(id)specifiersForSpecifier:(id)arg0 observer:(id)arg1 ;
-(void)_clearAllSpecifiers;
-(void)_invalidateSpecifiersForObservers;
-(void)addObserver:(id)arg0 ;
-(void)enumerateObserversOfClass:(Class)arg0 usingBlock:(id)arg1 ;
-(void)enumerateObserversUsingBlock:(id)arg0 ;
-(void)loadSpecifiers;
-(void)performUpdates:(id)arg0 ;
-(void)performUpdatesAnimated:(BOOL)arg0 usingBlock:(id)arg1 ;
-(void)reloadSpecifiers;
-(void)removeObserver:(id)arg0 ;
-(void)setPreferenceValue:(id)arg0 specifier:(id)arg1 ;


@end


#endif