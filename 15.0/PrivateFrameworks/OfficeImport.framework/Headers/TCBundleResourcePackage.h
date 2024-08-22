// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TCBUNDLERESOURCEPACKAGE_H
#define TCBUNDLERESOURCEPACKAGE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "OISFUZipArchive.h"

@interface TCBundleResourcePackage : NSObject {
    OISFUZipArchive *mZipArchive;
    NSMutableDictionary *mEntryMap;
}




-(id)entryWithName:(id)arg0 cacheResult:(BOOL)arg1 ;
-(id)initWithZipArchive:(id)arg0 ;


@end


#endif