// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIDOCUMENTPICKERSUBFOLDERSCONTAINERMODEL_H
#define _UIDOCUMENTPICKERSUBFOLDERSCONTAINERMODEL_H

@class UIDocumentPickerURLContainerModel, NSString;



@interface _UIDocumentPickerSubfoldersContainerModel : UIDocumentPickerURLContainerModel {
    NSString *_containerID;
}




-(BOOL)shouldShowTopLevelContainers;
-(id)_createObserver;
-(id)displayTitle;
-(id)initWithPickableTypes:(id)arg0 container:(id)arg1 ;
-(id)initWithURL:(id)arg0 pickableTypes:(id)arg1 mode:(NSUInteger)arg2 ;
-(id)scopes;
-(void)startMonitoringChanges;


@end


#endif