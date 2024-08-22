// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIDOCUMENTPICKERCONTAINERMODEL_H
#define _UIDOCUMENTPICKERCONTAINERMODEL_H

@class NSArray, NSOperationQueue, NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _UIDocumentPickerContainerModel : NSObject {
    NSObject<OS_dispatch_queue> *_underlyingQueue;
}


@property (readonly, nonatomic) BOOL afterInitialUpdate;
@property (readonly, nonatomic) NSArray *modelObjects;
@property (readonly, copy, nonatomic) NSArray *pickableTypes;
@property (readonly, nonatomic) NSUInteger pickerMode;
@property (nonatomic) int sortOrder; // ivar: _sortOrder
@property (retain, nonatomic) NSOperationQueue *thumbnailQueue; // ivar: _thumbnailQueue
@property (retain, nonatomic) NSMutableArray *updateHandlers; // ivar: _updateHandlers


-(id)displayTitle;
-(id)init;
-(void)dealloc;
-(void)refreshItem:(id)arg0 thumbnailOnly:(BOOL)arg1 ;
-(void)startMonitoringChanges;
-(void)stopMonitoringChanges;
-(void)updateSortDescriptors;


@end


#endif