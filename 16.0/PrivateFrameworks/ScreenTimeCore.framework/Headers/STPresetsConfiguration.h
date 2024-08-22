// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STPRESETSCONFIGURATION_H
#define STPRESETSCONFIGURATION_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface STPresetsConfiguration : NSObject

@property (readonly) NSNumber *allowedAppStoreRating;
@property (readonly) NSNumber *allowedMovieRating;
@property (readonly) NSNumber *allowedTVRating;
@property (readonly) NSInteger allowedWebContent;
@property (readonly, getter=isBooksAllowed) BOOL booksAllowed;
@property (readonly, getter=isDeletingAppsAllowed) BOOL deletingAppsAllowed;
@property (readonly, getter=isExplicitMediaAllowed) BOOL explicitMediaAllowed;
@property (readonly, getter=areMusicProfilesAllowed) BOOL musicProfilesAllowed;
@property (readonly, getter=areMusicVideosAllowed) BOOL musicVideosAllowed;
@property (readonly, getter=isSiriExplicitAllowed) BOOL siriExplicitAllowed;
@property (readonly, getter=isSiriWebSearchAllowed) BOOL siriWebSearchAllowed;




@end


#endif