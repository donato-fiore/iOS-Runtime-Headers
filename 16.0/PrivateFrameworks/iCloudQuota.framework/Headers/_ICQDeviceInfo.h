// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _ICQDEVICEINFO_H
#define _ICQDEVICEINFO_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface _ICQDeviceInfo : NSObject

@property (retain, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (retain, nonatomic) NSString *key; // ivar: _key
@property (retain, nonatomic) NSDictionary *wordsToReplace; // ivar: _wordsToReplace


+(id)defaultDeviceInfoWithBundleId:(id)arg0 ;
+(id)getInfoWithBundleId:(id)arg0 ;
+(id)templateKeyForPhotos:(NSUInteger)arg0 video:(NSUInteger)arg1 ;
+(void)getInfoWithBundleId:(id)arg0 completion:(id)arg1 ;


@end


#endif