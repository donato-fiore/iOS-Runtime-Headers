// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QLPREVIEWMOCKSCENE_H
#define QLPREVIEWMOCKSCENE_H

@class NSString;
@protocol QLPreviewControllerConforming, QLPreviewItem, QLPreviewControllerConformingDataSource, QLPreviewControllerConformingDelegate;

#import <Foundation/Foundation.h>


@interface QLPreviewMockScene : NSObject <QLPreviewControllerConforming>



@property (readonly) NSObject<QLPreviewItem> *currentPreviewItem;
@property NSInteger currentPreviewItemIndex; // ivar: currentPreviewItemIndex
@property (weak, nonatomic) NSObject<QLPreviewControllerConformingDataSource> *dataSource; // ivar: dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<QLPreviewControllerConformingDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)canPreviewItem:(id)arg0 ;
+(id)requestPreviewMockSceneActivation;
-(id)init;
-(void)dismissPreview;
-(void)presentPreview;
-(void)refreshCurrentPreviewItem;
-(void)reloadData;


@end


#endif