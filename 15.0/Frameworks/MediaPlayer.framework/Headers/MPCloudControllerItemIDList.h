// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPCLOUDCONTROLLERITEMIDLIST_H
#define MPCLOUDCONTROLLERITEMIDLIST_H

@class ICCloudItemIDList;

#import <Foundation/Foundation.h>


@interface MPCloudControllerItemIDList : NSObject

@property (retain, nonatomic) ICCloudItemIDList *cloudItemIDList; // ivar: _cloudItemIDList


+(id)cloudItemIDListForPlaylist:(id)arg0 ;
-(id)ICCloudItemIDList;
-(id)init;
-(void)addCloudItemID:(NSUInteger)arg0 idType:(NSInteger)arg1 ;
-(void)insertCloudItemID:(NSUInteger)arg0 idType:(NSInteger)arg1 atIndex:(NSUInteger)arg2 ;


@end


#endif