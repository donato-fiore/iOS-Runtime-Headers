// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BUSIMPLEFILECOPIER_H
#define BUSIMPLEFILECOPIER_H

@class NSURL, NSString;
@protocol NSFileManagerDelegate, BUFileCopier, BUFileCopierDelegate;

#import <Foundation/Foundation.h>


@interface BUSimpleFileCopier : NSObject <NSFileManagerDelegate, BUFileCopier>



@property (retain, nonatomic) NSURL *currentCopyItemURL; // ivar: _currentCopyItemURL
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<BUFileCopierDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSURL *fromURL; // ivar: _fromURL
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)countFilesAndSizesInDirectory:(id)arg0 totalFileSize:(*NSUInteger)arg1 totalFileCount:(*NSUInteger)arg2 totalFileCountExcludeDir:(*NSUInteger)arg3 ;
-(BOOL)copyToURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)countTotalFileSize:(*NSUInteger)arg0 totalFileCount:(*NSUInteger)arg1 ;
-(BOOL)fileManager:(id)arg0 shouldCopyItemAtURL:(id)arg1 toURL:(id)arg2 ;
-(id)initWithURL:(id)arg0 ;
-(void)_finishCurrentCopyItem;


@end


#endif