// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MCDBROWSABLECONTENTUTILITIES_H
#define MCDBROWSABLECONTENTUTILITIES_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface MCDBrowsableContentUtilities : NSObject

@property (readonly, nonatomic) NSArray *firstPartyAppBundleIDs;
@property (retain, nonatomic) NSArray *nowPlayingIdentifiers; // ivar: _nowPlayingIdentifiers


+(id)sharedInstance;


@end


#endif