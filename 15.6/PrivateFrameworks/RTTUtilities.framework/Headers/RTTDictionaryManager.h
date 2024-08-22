// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RTTDICTIONARYMANAGER_H
#define RTTDICTIONARYMANAGER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface RTTDictionaryManager : NSObject

@property (retain, nonatomic) NSArray *availableDictionaries; // ivar: _availableDictionaries


+(id)_availableDictionaryAssetsUsingRemoteInfo:(BOOL)arg0 ;
-(id)_ttyDictionaryAsset;
-(id)init;
-(void)_downloadAsset:(id)arg0 ;
-(void)dealloc;
-(void)deleteIfNeeded;
-(void)downloadIfNeeded;


@end


#endif