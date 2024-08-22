// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKAPPLICATIONPROXY_H
#define GKAPPLICATIONPROXY_H

@class NSNumber, NSBundle, NSString, LSApplicationProxy, NSDictionary, NSDate;

#import <Foundation/Foundation.h>


@interface GKApplicationProxy : NSObject

@property (readonly, retain, nonatomic) NSNumber *adamID;
@property (readonly, retain, nonatomic) NSBundle *bundle;
@property (readonly, retain, nonatomic) NSString *bundleID;
@property (readonly, retain, nonatomic) NSString *bundleShortVersion;
@property (readonly, retain, nonatomic) NSString *bundleVersion;
@property (readonly, retain, nonatomic) NSNumber *externalVersion;
@property (readonly, nonatomic, getter=isGameCenterEnabled) BOOL gameCenterEnabled;
@property (readonly, nonatomic, getter=isInstalled) BOOL installed;
@property (retain, nonatomic) LSApplicationProxy *lsProxy; // ivar: _lsProxy
@property (retain, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (readonly, retain, nonatomic) NSDate *purchaseDate;
@property (readonly, nonatomic, getter=isRestricted) BOOL restricted;


+(id)metadataForBundleURL:(id)arg0 ;
-(id)initWithBundleID:(id)arg0 ;
-(id)initWithProxy:(id)arg0 ;


@end


#endif