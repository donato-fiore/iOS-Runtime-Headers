// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSETTINGSSYNCENGINEACCESS_H
#define WBSETTINGSSYNCENGINEACCESS_H

@class WBSStartPageSectionManager, NSString, NSArray;
@protocol WBSSettingsSyncEngineAccess;

#import <Foundation/Foundation.h>


@interface WBSettingsSyncEngineAccess : NSObject <WBSSettingsSyncEngineAccess>

 {
    WBSStartPageSectionManager *_lazyStartPageSectionsManager;
}


@property (readonly, nonatomic) BOOL backgroundImageAppearanceIsLight;
@property (readonly, nonatomic) BOOL backgroundImageExists;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *syncSettingsUpDictionary;


-(BOOL)_isShowBackgroundImageEnabled;
-(BOOL)syncEnabled;
-(NSInteger)_settingForValue:(id)arg0 ;
-(id)_startPageSectionOrder;
-(id)startPageSectionsManager;
-(void)_didUpdateStartPageBackgroundImageVisibilityWithRecord:(id)arg0 ;
-(void)_updateStartPageBackgroundImageWithRecord:(id)arg0 ;
-(void)_updateStartPageSectionOrder:(id)arg0 ;
-(void)_updateStartPageSectionVisibilityWithIdentifier:(id)arg0 record:(id)arg1 ;
-(void)didDeleteRemoteRecordWithID:(id)arg0 ;
-(void)didReceiveRemoteCloudSettingsUpdateWithRecord:(id)arg0 ;


@end


#endif