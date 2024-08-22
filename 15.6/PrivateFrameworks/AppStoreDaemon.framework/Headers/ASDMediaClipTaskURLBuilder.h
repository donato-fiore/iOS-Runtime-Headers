// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASDMEDIACLIPTASKURLBUILDER_H
#define ASDMEDIACLIPTASKURLBUILDER_H

@class NSString, NSNumber;
@protocol AMSBagProtocol;

#import <Foundation/Foundation.h>


@interface ASDMediaClipTaskURLBuilder : NSObject {
    NSString *_bundleID;
    id<AMSBagProtocol> *_bag;
}


@property (retain, nonatomic) NSNumber *externalVersionID; // ivar: _externalVersionID


-(id)_devicePlatform;
-(id)_hostPromise;
-(id)_pathPromise;
-(id)_queryPromise;
-(id)build;
-(id)initWithBundleID:(id)arg0 bag:(id)arg1 ;


@end


#endif