// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCMMINVITATIONSDATASOURCEMANAGER_H
#define PXCMMINVITATIONSDATASOURCEMANAGER_H



#import "PXSectionedDataSourceManager.h"
#import "PXCMMInvitationsDataSource.h"

@interface PXCMMInvitationsDataSourceManager : PXSectionedDataSourceManager

@property (readonly, nonatomic) PXCMMInvitationsDataSource *dataSource;


+(id)currentDataSourceManager;
+(id)emptyDataSourceManager;
+(id)keyPathsAffectingCurrentDataSourceManager;


@end


#endif