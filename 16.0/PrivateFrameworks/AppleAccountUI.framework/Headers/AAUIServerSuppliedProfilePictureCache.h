// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AAUISERVERSUPPLIEDPROFILEPICTURECACHE_H
#define AAUISERVERSUPPLIEDPROFILEPICTURECACHE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface AAUIServerSuppliedProfilePictureCache : NSObject {
    NSMutableDictionary *_personIDToEntryMap;
    CGFloat _pictureDiameter;
}


@property (readonly, nonatomic) CGFloat pictureDiameter;


+(id)sharedCache;
-(BOOL)updateProfilePicture:(id)arg0 didReceiveNewPicture:(BOOL)arg1 serverCacheTag:(id)arg2 forPersonID:(id)arg3 ;
-(id)init;
-(id)profilePictureForPersonID:(id)arg0 diameter:(CGFloat)arg1 serverFetchBlock:(id)arg2 ;
-(void)_ensureMinimumPictureDiameter_mustBeSynchronized:(CGFloat)arg0 ;
-(void)profilePictureForPersonID:(id)arg0 diameter:(CGFloat)arg1 completion:(id)arg2 ;


@end


#endif