// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLEMAILADDRESSMANAGER_H
#define PLEMAILADDRESSMANAGER_H

@class NSMutableDictionary, PLPhotoLibraryPathManager, PLLazyObject;

#import <Foundation/Foundation.h>


@interface PLEmailAddressManager : NSObject {
    NSMutableDictionary *_keysForEmails;
    NSMutableDictionary *_emailsForKey;
    int _maxKey;
    PLPhotoLibraryPathManager *_pathManager;
    PLLazyObject *_lazyAssetsdClient;
}




-(id)assetsdClient;
-(id)emailAddressForKey:(id)arg0 ;
-(id)initWithPathManager:(id)arg0 lazyAssetsdClient:(id)arg1 ;
-(id)keyForEmailAddress:(id)arg0 ;
-(id)plistPath;
-(void)_loadDictionariesIfNeeded;


@end


#endif