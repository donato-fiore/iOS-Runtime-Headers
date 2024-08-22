// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIDOCUMENTPICKERALLCONTAINERSMODEL_H
#define _UIDOCUMENTPICKERALLCONTAINERSMODEL_H

@class UIDocumentPickerURLContainerModel, NSArray, BRContainer;



@interface _UIDocumentPickerAllContainersModel : UIDocumentPickerURLContainerModel {
    NSArray *_scopes;
    BRContainer *_sourceContainer;
}




-(BOOL)shouldShowTopLevelContainers;
-(id)_createObserver;
-(id)displayTitle;
-(id)initWithFoldersForPickableTypes:(id)arg0 mode:(NSUInteger)arg1 sourceContainer:(id)arg2 ;
-(id)initWithURL:(id)arg0 pickableTypes:(id)arg1 mode:(NSUInteger)arg2 ;
-(id)scopes;
-(void)startMonitoringChanges;
-(void)updateScopes;


@end


#endif