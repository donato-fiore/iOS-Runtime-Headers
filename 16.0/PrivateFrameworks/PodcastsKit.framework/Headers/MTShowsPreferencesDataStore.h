// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTSHOWSPREFERENCESDATASTORE_H
#define MTSHOWSPREFERENCESDATASTORE_H


#import <Foundation/Foundation.h>


@interface MTShowsPreferencesDataStore : NSObject

@property (nonatomic) NSInteger sortOrder;


+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)sharedInstance;
-(NSInteger)_sortTypeForString:(id)arg0 ;
-(id)_stringForSortType:(NSInteger)arg0 ;
-(id)sortDescriptors;


@end


#endif