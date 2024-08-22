// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUISETTINGSMANAGER_H
#define VUISETTINGSMANAGER_H

@class NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface VUISettingsManager : NSObject

@property (readonly, nonatomic, getter=isAppInstallationAllowed) BOOL appInstallationAllowed;
@property (copy, nonatomic) NSNumber *maxMovieRank; // ivar: _maxMovieRank
@property (copy, nonatomic) NSNumber *maxTVShowRank; // ivar: _maxTVShowRank
@property (copy, nonatomic) NSString *preferredVideoFormat; // ivar: _preferredVideoFormat
@property (readonly, nonatomic) NSString *restrictions;


+(id)sharedInstance;
-(BOOL)_hasPreferredVideoFormatChanged;
-(BOOL)_hasRestrictionsChanged;
-(id)_formatStringForVideoFormat:(NSUInteger)arg0 ;
-(id)_init;
-(id)init;
-(id)preferencesJSONData;
-(void)_sendSettingsValuesToJS;
-(void)checkAndUpdateSettings;


@end


#endif