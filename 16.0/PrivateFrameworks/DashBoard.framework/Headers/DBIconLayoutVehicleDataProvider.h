// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBICONLAYOUTVEHICLEDATAPROVIDER_H
#define DBICONLAYOUTVEHICLEDATAPROVIDER_H

@class NSArray, NSString;
@protocol DBIconModelApplicationDataSource, SBHIconManagerDelegate, CRSIconLayoutVehicleDataProviding;

#import <Foundation/Foundation.h>

#import "DBIconImageCache.h"
#import "DBIconManager.h"
#import "DBIconModel.h"

@interface DBIconLayoutVehicleDataProvider : NSObject <DBIconModelApplicationDataSource, SBHIconManagerDelegate, CRSIconLayoutVehicleDataProviding>



@property (readonly, copy, nonatomic) NSArray *allApplicationIcons;
@property (retain, nonatomic) NSArray *allApps; // ivar: _allApps
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) DBIconImageCache *iconImageCache; // ivar: _iconImageCache
@property (retain, nonatomic) DBIconManager *iconManager; // ivar: _iconManager
@property (retain, nonatomic) DBIconModel *iconModel; // ivar: _iconModel
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *vehicleID; // ivar: _vehicleID


+(id)defaultIconState;
-(BOOL)iconManagerCanBeginIconDrags:(id)arg0 ;
-(BOOL)isEditingAllowedForIconManager:(id)arg0 ;
-(Class)iconManager:(id)arg0 folderControllerClassForFolderClass:(Class)arg1 proposedClass:(Class)arg2 ;
-(NSInteger)interfaceOrientationForIconManager:(id)arg0 ;
-(id)defaultIconStateForIconManager:(id)arg0 ;
-(id)initWithVehicleID:(id)arg0 iconImageCache:(id)arg1 ;
-(void)getApplicationIconInformationForBundleID:(id)arg0 completion:(id)arg1 ;
-(void)getIconStateWithCompletion:(id)arg0 ;
-(void)iconManager:(id)arg0 launchIconForIconView:(id)arg1 ;
-(void)resetIconState;
-(void)setIconState:(id)arg0 ;


@end


#endif