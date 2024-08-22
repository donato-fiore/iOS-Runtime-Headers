// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BUUNARCHIVINGFILECOPIER_H
#define BUUNARCHIVINGFILECOPIER_H

@class NSString;
@protocol BUFileCopier, BUFileCopierDelegate;

#import <Foundation/Foundation.h>

#import "BUZipFileArchive.h"

@interface BUUnarchivingFileCopier : NSObject <BUFileCopier>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<BUFileCopierDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) BUZipFileArchive *zipArchive; // ivar: _zipArchive


-(BOOL)copyToURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)countTotalFileSize:(*NSUInteger)arg0 totalFileCount:(*NSUInteger)arg1 ;
-(id)initWithURL:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;


@end


#endif