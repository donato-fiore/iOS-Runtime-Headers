// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIDOCUMENTPICKERROOTCONTAINERMODEL_H
#define _UIDOCUMENTPICKERROOTCONTAINERMODEL_H

@class UIDocumentPickerURLContainerModel;



@interface _UIDocumentPickerRootContainerModel : UIDocumentPickerURLContainerModel {
    BOOL _isObservingContainers;
}




-(id)_containerListDidChange;
-(id)initWithPickableTypes:(id)arg0 mode:(NSUInteger)arg1 ;
-(id)initWithURL:(id)arg0 pickableTypes:(id)arg1 mode:(NSUInteger)arg2 ;
-(void)startMonitoringChanges;


@end


#endif