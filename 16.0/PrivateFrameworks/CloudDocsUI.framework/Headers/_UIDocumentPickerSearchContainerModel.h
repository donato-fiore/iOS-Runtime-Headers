// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIDOCUMENTPICKERSEARCHCONTAINERMODEL_H
#define _UIDOCUMENTPICKERSEARCHCONTAINERMODEL_H

@class UIDocumentPickerURLContainerModel, NSString;



@interface _UIDocumentPickerSearchContainerModel : UIDocumentPickerURLContainerModel

@property (copy, nonatomic) NSString *queryString; // ivar: _queryString


-(BOOL)shouldShowTopLevelContainers;
-(id)_createObserver;
-(id)displayTitle;
-(id)initWithPickableTypes:(id)arg0 mode:(NSUInteger)arg1 ;
-(id)initWithURL:(id)arg0 pickableTypes:(id)arg1 mode:(NSUInteger)arg2 ;
-(id)scopes;
-(void)_updateObserverForQuery;
-(void)arrayController:(id)arg0 modelChanged:(id)arg1 differences:(id)arg2 ;
-(void)startMonitoringChanges;


@end


#endif