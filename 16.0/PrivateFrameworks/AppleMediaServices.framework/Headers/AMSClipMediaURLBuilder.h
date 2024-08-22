// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSCLIPMEDIAURLBUILDER_H
#define AMSCLIPMEDIAURLBUILDER_H

@class NSString, NSNumber;
@protocol AMSBagProtocol;

#import <Foundation/Foundation.h>


@interface AMSClipMediaURLBuilder : NSObject

@property (retain, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (retain, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (retain, nonatomic) NSNumber *externalVersionID; // ivar: _externalVersionID


-(id)_devicePlatform;
-(id)_hostPromise;
-(id)_pathPromise;
-(id)_queryPromise;
-(id)build;
-(id)initWithBundleID:(id)arg0 bag:(id)arg1 ;


@end


#endif