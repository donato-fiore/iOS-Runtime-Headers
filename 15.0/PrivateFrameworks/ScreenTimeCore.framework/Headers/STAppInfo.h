// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STAPPINFO_H
#define STAPPINFO_H

@class NSData, NSURL, NSString;

#import <Foundation/Foundation.h>


@interface STAppInfo : NSObject

@property (copy) NSData *artworkData; // ivar: _artworkData
@property (copy, nonatomic) NSURL *artworkURL; // ivar: _artworkURL
@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (copy, nonatomic) NSString *developerName; // ivar: _developerName
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (copy, nonatomic) NSURL *localURL; // ivar: _localURL
@property (nonatomic) short platform; // ivar: _platform
@property (copy, nonatomic) NSString *ratingLabel; // ivar: _ratingLabel
@property (nonatomic) NSInteger source; // ivar: _source


-(id)description;


@end


#endif