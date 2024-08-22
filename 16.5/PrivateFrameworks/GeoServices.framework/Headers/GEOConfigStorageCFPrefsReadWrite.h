// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOCONFIGSTORAGECFPREFSREADWRITE_H
#define GEOCONFIGSTORAGECFPREFSREADWRITE_H

@class NSString;
@protocol GEOConfigStorageReadWrite;


#import "GEOConfigStorageCFPrefsReadOnly.h"

@interface GEOConfigStorageCFPrefsReadWrite : GEOConfigStorageCFPrefsReadOnly <GEOConfigStorageReadWrite>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)setConfigValue:(id)arg0 forKey:(id)arg1 options:(NSUInteger)arg2 synchronous:(BOOL)arg3 ;


@end


#endif