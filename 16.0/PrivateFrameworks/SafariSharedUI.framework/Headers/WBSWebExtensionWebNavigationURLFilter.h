// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSWEBEXTENSIONWEBNAVIGATIONURLFILTER_H
#define WBSWEBEXTENSIONWEBNAVIGATIONURLFILTER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface WBSWebExtensionWebNavigationURLFilter : NSObject {
    NSArray *_predicateGroups;
}




-(BOOL)matchesURL:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 outErrorMessage:(*id)arg1 ;


@end


#endif