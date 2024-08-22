// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSETTINGSCONFIGURATIONSSOURCE_H
#define PXSETTINGSCONFIGURATIONSSOURCE_H

@class NSMutableArray, NSUserDefaults;
@protocol PXSettingsConfigurationsMutableSource, PXSettingsConfigurationsSourceObserver;

#import <Foundation/Foundation.h>


@interface PXSettingsConfigurationsSource : NSObject <PXSettingsConfigurationsMutableSource>



@property (readonly, nonatomic) NSMutableArray *configurations; // ivar: _configurations
@property (readonly, nonatomic) NSInteger numberOfConfigurations;
@property (weak, nonatomic) NSObject<PXSettingsConfigurationsSourceObserver> *observer; // ivar: _observer
@property (readonly, nonatomic) NSUserDefaults *userDefaults; // ivar: _userDefaults


-(NSInteger)indexOfConfiguration:(id)arg0 ;
-(id)configurationAtIndex:(NSInteger)arg0 ;
-(id)init;
-(id)initWithUserDefaults:(id)arg0 ;
-(void)_save;
-(void)deleteAllConfigurations;
-(void)deleteConfigurationAtIndex:(NSInteger)arg0 ;
-(void)insertConfiguration:(id)arg0 atIndex:(NSInteger)arg1 ;
-(void)insertConfigurations:(id)arg0 atIndex:(NSInteger)arg1 ;
-(void)performChanges:(id)arg0 ;
-(void)renameConfigurationAtIndex:(NSInteger)arg0 withName:(id)arg1 ;
-(void)updateConfigurationAtIndex:(NSInteger)arg0 ;


@end


#endif