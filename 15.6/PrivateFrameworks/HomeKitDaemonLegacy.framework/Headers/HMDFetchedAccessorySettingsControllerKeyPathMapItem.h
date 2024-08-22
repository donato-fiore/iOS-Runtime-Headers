// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDFETCHEDACCESSORYSETTINGSCONTROLLERKEYPATHMAPITEM_H
#define HMDFETCHEDACCESSORYSETTINGSCONTROLLERKEYPATHMAPITEM_H

@class NSMutableArray, NSArray;
@protocol HMDFetchedSettingsDriver;

#import <Foundation/Foundation.h>


@interface HMDFetchedAccessorySettingsControllerKeyPathMapItem : NSObject {
    NSMutableArray *_keyPathsInternal;
}


@property (readonly) NSObject<HMDFetchedSettingsDriver> *driver; // ivar: _driver
@property (readonly) NSArray *keyPaths;


-(id)initWithDriver:(id)arg0 keyPaths:(id)arg1 ;


@end


#endif