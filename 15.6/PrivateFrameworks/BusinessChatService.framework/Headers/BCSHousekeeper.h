// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BCSHOUSEKEEPER_H
#define BCSHOUSEKEEPER_H

@class NSUserDefaults;
@protocol BCSHousekeeping;

#import <Foundation/Foundation.h>


@interface BCSHousekeeper : NSObject <BCSHousekeeping>



@property (readonly, nonatomic) NSInteger currentVersion; // ivar: _currentVersion
@property (readonly, nonatomic) NSUserDefaults *userDefaults; // ivar: _userDefaults


-(id)initWithUserDefaults:(id)arg0 ;
-(id)initWithUserDefaults:(id)arg0 currentVersion:(NSInteger)arg1 ;
-(void)cleanupDataAtOldPathsIfNeeded;
-(void)cleanupOldCachePath;
-(void)cleanupOldUserDefaults;
-(void)removeItemAtfileURL:(id)arg0 ;


@end


#endif