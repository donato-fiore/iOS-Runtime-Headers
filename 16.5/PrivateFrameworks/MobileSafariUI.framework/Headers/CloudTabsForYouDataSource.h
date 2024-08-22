// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLOUDTABSFORYOUDATASOURCE_H
#define CLOUDTABSFORYOUDATASOURCE_H

@class WBSForYouCloudTabsDataSource, WBSCloudTabStore;



@interface CloudTabsForYouDataSource : WBSForYouCloudTabsDataSource {
    WBSCloudTabStore *_cloudTabStore;
}




-(id)initWithTabStore:(id)arg0 ;
-(void)_cloudTabsDidUpdate:(id)arg0 ;
-(void)dealloc;


@end


#endif