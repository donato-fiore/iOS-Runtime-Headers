// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RPSTOREINFO_H
#define RPSTOREINFO_H

@class NSURL, NSString;

#import <Foundation/Foundation.h>


@interface RPStoreInfo : NSObject

@property (retain, nonatomic) NSURL *appArtworkURL; // ivar: _appArtworkURL
@property (retain, nonatomic) NSString *appName; // ivar: _appName
@property (retain, nonatomic) NSString *author; // ivar: _author
@property (retain, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (retain, nonatomic) NSURL *itemURL; // ivar: _itemURL


-(id)dictionary;


@end


#endif