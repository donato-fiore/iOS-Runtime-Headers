// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PXPHOTOSVIEWSEARCHRESULTSDATASOURCEPROVIDER_H
#define _PXPHOTOSVIEWSEARCHRESULTSDATASOURCEPROVIDER_H

@class NSArray, NSString;
@protocol PXPhotosDataSourceProvider;

#import <Foundation/Foundation.h>


@interface _PXPhotosViewSearchResultsDataSourceProvider : NSObject <PXPhotosDataSourceProvider>

 {
    NSArray *_assetUUIDs;
    NSString *_title;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)createInitialPhotosDataSourceForDataSourceManager:(id)arg0 ;
-(id)initWithAssetUUIDs:(id)arg0 searchTitle:(id)arg1 ;
-(id)loadInitialPhotosDataSourceForDataSourceManager:(id)arg0 ;
-(id)localizedInitialLoadingStatusMessageForDataSourceManager:(id)arg0 ;


@end


#endif