// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DNDSCLIENTDETAILSPROVIDER_H
#define DNDSCLIENTDETAILSPROVIDER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface DNDSClientDetailsProvider : NSObject {
    NSMutableDictionary *_detailsByIdentifier;
}




+(id)_defaultModuleDirectories;
-(id)clientDetailsForIdentifier:(id)arg0 ;
-(id)clientDetailsForIdentifier:(id)arg0 applicationBundleURL:(id)arg1 ;
-(id)findClientDetailsForIdentifier:(id)arg0 ;
-(id)init;
-(void)_loadPreloadBundles;


@end


#endif