// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UNNOTIFICATIONCONTENTEXTENSIONCACHE_H
#define _UNNOTIFICATIONCONTENTEXTENSIONCACHE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _UNNotificationContentExtensionCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *extensions; // ivar: _extensions


-(id)_sourceDictForSource:(id)arg0 ;
-(id)extensionForNotificationSourceIdentifier:(id)arg0 categoryIdentifier:(id)arg1 ;
-(id)init;
-(void)_addExtension:(id)arg0 ;
-(void)_removeAllExtensions;
-(void)registerExtensions:(id)arg0 ;


@end


#endif