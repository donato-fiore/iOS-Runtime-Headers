// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKQLPREVIEWCONTROLLERDATASOURCE_H
#define CKQLPREVIEWCONTROLLERDATASOURCE_H

@class NSArray;
@protocol QLPreviewControllerDataSource;

#import <Foundation/Foundation.h>


@interface CKQLPreviewControllerDataSource : NSObject <QLPreviewControllerDataSource>



@property (copy, nonatomic) NSArray *previewItems; // ivar: _previewItems


-(NSInteger)numberOfPreviewItemsInPreviewController:(id)arg0 ;
-(id)previewController:(id)arg0 previewItemAtIndex:(NSInteger)arg1 ;


@end


#endif