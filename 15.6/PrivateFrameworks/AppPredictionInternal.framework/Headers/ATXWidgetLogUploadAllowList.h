// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXWIDGETLOGUPLOADALLOWLIST_H
#define ATXWIDGETLOGUPLOADALLOWLIST_H

@class NSSet;

#import <Foundation/Foundation.h>


@interface ATXWidgetLogUploadAllowList : NSObject {
    BOOL _allowListEnabled;
    NSSet *_allowedWidgetBundleIds;
}




-(BOOL)logUploadAllowedForWidgetBundleId:(id)arg0 ;
-(id)init;
-(id)initWithAssets:(id)arg0 ;


@end


#endif