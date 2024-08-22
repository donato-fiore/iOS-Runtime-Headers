// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSCACHEDELETESERVICE_H
#define VSCACHEDELETESERVICE_H


#import <Foundation/Foundation.h>


@interface VSCacheDeleteService : NSObject



+(id)sharedService;
-(BOOL)registerCacheDelete;
-(NSInteger)totalSizeOfAssets:(id)arg0 ;
-(id)periodic:(id)arg0 urgency:(int)arg1 ;
-(id)purge:(id)arg0 urgency:(int)arg1 ;
-(id)purgeImpl:(id)arg0 urgency:(int)arg1 ;
-(id)purgeable:(id)arg0 urgency:(int)arg1 ;
-(id)purgeableAssetsWithInfo:(id)arg0 urgency:(int)arg1 ;


@end


#endif