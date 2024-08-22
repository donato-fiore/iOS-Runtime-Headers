// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIRESTRICTIONS_H
#define VUIRESTRICTIONS_H

@protocol VUIRestrictions;

#import <Foundation/Foundation.h>


@interface VUIRestrictions : NSObject <VUIRestrictions>



@property (readonly, nonatomic) BOOL allowsShowingUndownloadedMovies;
@property (readonly, nonatomic) BOOL allowsShowingUndownloadedTVShows;


+(id)sharedInstance;


@end


#endif