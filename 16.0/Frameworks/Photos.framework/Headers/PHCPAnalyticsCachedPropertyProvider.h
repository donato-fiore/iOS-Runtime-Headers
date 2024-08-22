// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHCPANALYTICSCACHEDPROPERTYPROVIDER_H
#define PHCPANALYTICSCACHEDPROPERTYPROVIDER_H

@class NSString;
@protocol CPAnalyticsPhotoKitPropertyProvider;

#import <Foundation/Foundation.h>

#import "PHPhotoLibrary.h"

@interface PHCPAnalyticsCachedPropertyProvider : NSObject <CPAnalyticsPhotoKitPropertyProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (readonly) Class superclass;


-(id)_cachedProperties;
-(id)_librarySizeRange:(NSInteger)arg0 ;
-(id)init;
-(id)initWithPhotoLibrary:(id)arg0 ;
-(void)registerSystemProperties:(id)arg0 ;


@end


#endif