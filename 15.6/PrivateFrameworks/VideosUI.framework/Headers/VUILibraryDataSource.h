// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUILIBRARYDATASOURCE_H
#define VUILIBRARYDATASOURCE_H

@protocol VUILibraryDataSourceDelegate;

#import <Foundation/Foundation.h>


@interface VUILibraryDataSource : NSObject

@property (weak, nonatomic) NSObject<VUILibraryDataSourceDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL hasCompletedInitialFetch; // ivar: _hasCompletedInitialFetch




@end


#endif