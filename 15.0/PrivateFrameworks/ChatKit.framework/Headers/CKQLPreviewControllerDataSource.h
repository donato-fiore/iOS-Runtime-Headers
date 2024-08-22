// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKQLPREVIEWCONTROLLERDATASOURCE_H
#define CKQLPREVIEWCONTROLLERDATASOURCE_H

@class NSString, NSArray;
@protocol QLPreviewControllerConformingDataSource, QLPreviewControllerDataSource;

#import <Foundation/Foundation.h>


@interface CKQLPreviewControllerDataSource : NSObject <QLPreviewControllerConformingDataSource, QLPreviewControllerDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *previewItems; // ivar: _previewItems
@property (readonly) Class superclass;


-(NSInteger)numberOfPreviewItemsInPreviewController:(id)arg0 ;
-(id)previewController:(id)arg0 previewItemAtIndex:(NSInteger)arg1 ;


@end


#endif