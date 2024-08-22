// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CARDDAVPROPERTIESHELPER_H
#define CARDDAVPROPERTIESHELPER_H


#import <Foundation/Foundation.h>


@interface CardDAVPropertiesHelper : NSObject



+(BOOL)updateSyncDict:(id)arg0 withDAVContainer:(id)arg1 ;
+(NSInteger)maxImageSizeFromSyncDict:(id)arg0 ;
+(NSInteger)maxResourceSizeFromSyncDict:(id)arg0 ;


@end


#endif