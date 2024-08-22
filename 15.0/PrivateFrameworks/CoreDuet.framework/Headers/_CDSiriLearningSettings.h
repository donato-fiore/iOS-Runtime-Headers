// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CDSIRILEARNINGSETTINGS_H
#define _CDSIRILEARNINGSETTINGS_H

@class NSArray, NSMutableArray;

#import <Foundation/Foundation.h>


@interface _CDSiriLearningSettings : NSObject {
    BOOL _hasPrefsAccess;
    int _notifyToken;
    os_unfair_lock_s _lock;
    NSArray *_allLearningDisabledBundleIDs;
    NSMutableArray *_delegates;
}


@property (readonly, nonatomic) NSArray *allLearningDisabledBundleIDs;


+(id)sharedInstance;
-(BOOL)isLearningDisabledForBundleID:(id)arg0 ;
-(void)startSanitizingInteractionStore:(id)arg0 ;
-(void)startSanitizingKnowledgeStore:(id)arg0 ;
-(void)stopSanitizing;


@end


#endif