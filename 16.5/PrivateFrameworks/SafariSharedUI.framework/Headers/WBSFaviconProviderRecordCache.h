// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSFAVICONPROVIDERRECORDCACHE_H
#define WBSFAVICONPROVIDERRECORDCACHE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface WBSFaviconProviderRecordCache : NSObject {
    NSMutableDictionary *_iconURLStringToInfoDictionary;
    NSMutableDictionary *_iconUUIDToURLStringDictionary;
}




-(id)dateAddedForFaviconURLString:(id)arg0 iconUUID:(*id)arg1 size:(struct CGSize *)arg2 ;
-(id)iconInfoForURLString:(id)arg0 ;
-(id)init;
-(void)removeAllRecords;
-(void)removeRecordForIconUUIDs:(id)arg0 ;
-(void)setDateAdded:(id)arg0 forFaviconURLString:(id)arg1 iconUUID:(id)arg2 iconSize:(struct CGSize )arg3 hasGeneratedResolutions:(BOOL)arg4 ;


@end


#endif