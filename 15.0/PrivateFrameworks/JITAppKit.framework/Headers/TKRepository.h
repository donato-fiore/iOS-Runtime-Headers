// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TKREPOSITORY_H
#define TKREPOSITORY_H

@class NSString, NSURL;

#import <Foundation/Foundation.h>


@interface TKRepository : NSObject {
    NSString *_bundlePath;
}


@property (readonly, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, nonatomic) NSString *version; // ivar: _version


+(BOOL)_hasEntitlement:(id)arg0 ;
+(BOOL)_isApprovedProcess;
+(id)_processBundleIdentifier;
+(id)bundlePathForURL:(id)arg0 ;
+(void)loadWithURL:(id)arg0 completion:(id)arg1 ;
+(void)reset;
+(void)unpackBundleWithURL:(id)arg0 destinationPath:(id)arg1 completion:(id)arg2 ;
-(id)initWithURL:(id)arg0 bundlePath:(id)arg1 ;
-(id)viewPathForName:(id)arg0 ;


@end


#endif