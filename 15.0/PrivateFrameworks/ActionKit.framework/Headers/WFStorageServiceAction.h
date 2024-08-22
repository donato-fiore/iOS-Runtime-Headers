// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFSTORAGESERVICEACTION_H
#define WFSTORAGESERVICEACTION_H

@class WFAction;



@interface WFStorageServiceAction : WFAction

@property (readonly, nonatomic) BOOL showsFilePicker;


-(BOOL)requiresRemoteExecution;
-(BOOL)setParameterState:(id)arg0 forKey:(id)arg1 ;
-(BOOL)showsSettingsWhenResourcesUnavailable;
-(BOOL)skipsProcessingHiddenParameters;
-(id)contentDestinationWithError:(*id)arg0 ;
-(id)filePathKey;
-(id)filenamePlaceholderText;
-(id)keywords;
-(id)outputContentClasses;
-(id)prioritizedParameterKeysForRemoteExecution;
-(id)requiredResources;
-(id)showPickerKey;
-(id)storageService;
-(void)initializeParameters;
-(void)runAsynchronouslyWithInput:(id)arg0 ;
-(void)runAsynchronouslyWithInput:(id)arg0 storageService:(id)arg1 ;
-(void)selectedStorageServiceChanged;
-(void)updatePathPrefix;


@end


#endif