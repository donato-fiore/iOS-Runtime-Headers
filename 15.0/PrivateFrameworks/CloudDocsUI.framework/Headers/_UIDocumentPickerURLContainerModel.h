// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIDOCUMENTPICKERURLCONTAINERMODEL_H
#define _UIDOCUMENTPICKERURLCONTAINERMODEL_H

@class UIDocumentPickerContainerModel, NSOperationQueue, NSString, NSArray, _UIArrayController<_UIDocumentPickerDirectoryObserver>, NSURL;
@protocol _UIArrayControllerDelegate;



@interface _UIDocumentPickerURLContainerModel : UIDocumentPickerContainerModel <_UIArrayControllerDelegate>

 {
    CGFloat _startObservingTime;
    NSOperationQueue *_presentedItemOperationQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *displayTitle; // ivar: _displayTitle
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *modelObjects; // ivar: _modelObjects
@property (retain, nonatomic) _UIArrayController<_UIDocumentPickerDirectoryObserver> *observer; // ivar: _observer
@property (copy, nonatomic) NSArray *pickableTypes; // ivar: _pickableTypes
@property (nonatomic) NSUInteger pickerMode; // ivar: _pickerMode
@property (readonly) Class superclass;
@property (retain, nonatomic) NSURL *url; // ivar: _url
@property (retain, nonatomic) id *urlObserver; // ivar: _urlObserver


+(id)_tagBlipColors;
+(id)allTags;
+(id)tagColorsByTag;
+(void)_tagColorsDidChange;
-(BOOL)afterInitialUpdate;
-(BOOL)shouldAllowPickingType:(id)arg0 ;
-(BOOL)shouldEnableContainer:(id)arg0 ;
-(BOOL)shouldShowContainerForType:(id)arg0 ;
-(id)_createObserver;
-(id)init;
-(id)initWithURL:(id)arg0 pickableTypes:(id)arg1 mode:(NSUInteger)arg2 ;
-(id)scopes;
-(void)arrayController:(id)arg0 modelChanged:(id)arg1 differences:(id)arg2 ;
-(void)callUpdateHandlerWithNewItems:(id)arg0 diff:(id)arg1 ;
-(void)dealloc;
-(void)refreshItem:(id)arg0 thumbnailOnly:(BOOL)arg1 ;
-(void)startMonitoringChanges;
-(void)stopMonitoringChanges;
-(void)updateObserverForURL:(id)arg0 ;
-(void)updateSortDescriptors;


@end


#endif