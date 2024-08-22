// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TUCALLDIRECTORYMETADATACACHEDATAPROVIDER_H
#define TUCALLDIRECTORYMETADATACACHEDATAPROVIDER_H

@class CXCallDirectoryManager;


#import "TUMetadataCacheDataProvider.h"

@interface TUCallDirectoryMetadataCacheDataProvider : TUMetadataCacheDataProvider

@property (readonly, nonatomic) CXCallDirectoryManager *callDirectoryManager; // ivar: _callDirectoryManager
@property (copy, nonatomic) id *countryDialingCode; // ivar: _countryDialingCode
@property (copy, nonatomic) id *firstIdentificationEntriesForEnabledExtensions; // ivar: _firstIdentificationEntriesForEnabledExtensions
@property (readonly, nonatomic) int identificationEntriesChangedNotifyToken; // ivar: _identificationEntriesChangedNotifyToken


-(id)init;
-(void)dealloc;
-(void)updateCacheWithDestinationIDs:(id)arg0 withGroup:(id)arg1 ;


@end


#endif