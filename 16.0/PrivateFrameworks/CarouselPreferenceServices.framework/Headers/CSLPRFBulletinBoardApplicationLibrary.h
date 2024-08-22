// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSLPRFBULLETINBOARDAPPLICATIONLIBRARY_H
#define CSLPRFBULLETINBOARDAPPLICATIONLIBRARY_H

@class NSMutableDictionary, NSArray, NSDictionary, NSString;
@protocol CSLPRFApplicationLibrary;

#import <Foundation/Foundation.h>

#import "CSLPRFObservationHelper.h"

@interface CSLPRFBulletinBoardApplicationLibrary : NSObject <CSLPRFApplicationLibrary>

 {
    CSLPRFObservationHelper *_observationHelper;
    NSMutableDictionary *_lock_cachedApplications;
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) NSArray *allApplications;
@property (readonly, nonatomic) NSDictionary *allApplicationsDictionary;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)applicationWithBundleIdentifier:(id)arg0 ;
-(id)init;
-(void)addObserver:(id)arg0 ;
-(void)allApplicationsWithCompletion:(id)arg0 ;
-(void)applicationWithBundleIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif