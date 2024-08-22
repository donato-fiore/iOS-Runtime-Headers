// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRREMOTEUSERDEFAULTS_H
#define BRREMOTEUSERDEFAULTS_H

@class NSMutableDictionary, NSSet;

#import <Foundation/Foundation.h>


@interface BRRemoteUserDefaults : NSObject {
    NSMutableDictionary *_userDictionaryCache;
}


@property (readonly, nonatomic) NSSet *excludedExtensionsWorthPreserving;
@property (readonly, nonatomic) NSSet *excludedFilenamesWorthWarningAtLogout;
@property (readonly, nonatomic) NSInteger minFileSizeForThumbnailTransfer;


+(id)defaultExcludedExtensionsWorthPreserving;
+(id)defaultExcludedFilenamesWorthPreserving;
+(id)defaultExcludedFilenamesWorthWarningAtLogout;
+(id)sharedDefaults;
-(id)_init;
-(id)init;


@end


#endif