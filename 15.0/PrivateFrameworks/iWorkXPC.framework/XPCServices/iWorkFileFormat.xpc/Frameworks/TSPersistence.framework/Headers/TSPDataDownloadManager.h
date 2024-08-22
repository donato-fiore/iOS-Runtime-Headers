// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSPDATADOWNLOADMANAGER_H
#define TSPDATADOWNLOADMANAGER_H

@protocol TSPDataDownloadManagerDelegate;

#import <Foundation/Foundation.h>

#import "TSPObjectContext.h"

@interface TSPDataDownloadManager : NSObject {
    TSPObjectContext *_context;
}


@property (weak, nonatomic) NSObject<TSPDataDownloadManagerDelegate> *delegate; // ivar: _delegate


-(id)documentResourceDataWithDigestString:(id)arg0 locator:(id)arg1 filename:(id)arg2 ;
-(id)init;
-(id)initWithContext:(id)arg0 ;


@end


#endif