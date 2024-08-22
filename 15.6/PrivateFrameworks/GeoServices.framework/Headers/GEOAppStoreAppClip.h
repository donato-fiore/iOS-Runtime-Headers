// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOAPPSTOREAPPCLIP_H
#define GEOAPPSTOREAPPCLIP_H

@class NSURL, NSString;

#import <Foundation/Foundation.h>


@interface GEOAppStoreAppClip : NSObject

@property (retain, nonatomic) NSURL *appClipURL; // ivar: _appClipURL
@property (retain, nonatomic) NSURL *artworkURL; // ivar: _artworkURL
@property (copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (copy, nonatomic) NSString *title; // ivar: _title


-(id)description;
-(id)initWithBundleID:(id)arg0 title:(id)arg1 subtitle:(id)arg2 appClipURL:(id)arg3 artworkURL:(id)arg4 ;


@end


#endif