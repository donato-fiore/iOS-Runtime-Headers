// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRUPDATINGSESSIONINFO_H
#define PRUPDATINGSESSIONINFO_H

@class PRSPosterUpdateSessionInfo, NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface PRUpdatingSessionInfo : NSObject {
    PRSPosterUpdateSessionInfo *_info;
}


@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSDictionary *userInfo;


-(id)shortcutsWallpaperConfiguration;


@end


#endif