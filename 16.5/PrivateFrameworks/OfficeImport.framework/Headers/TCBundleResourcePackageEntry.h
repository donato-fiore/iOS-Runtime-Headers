// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TCBUNDLERESOURCEPACKAGEENTRY_H
#define TCBUNDLERESOURCEPACKAGEENTRY_H


#import <Foundation/Foundation.h>

#import "OISFUZipEntry.h"

@interface TCBundleResourcePackageEntry : NSObject {
    OISFUZipEntry *mZipEntry;
    ? mXmlDocument;
}




-(id)data;
-(id)initWithZipEntry:(id)arg0 ;
-(struct _xmlDoc *)xmlDocument;
-(void)dealloc;


@end


#endif