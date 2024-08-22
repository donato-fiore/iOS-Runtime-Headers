// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFENCODEMEDIAACTION_H
#define WFENCODEMEDIAACTION_H

@class WFAction, NSMutableArray;



@interface WFEncodeMediaAction : WFAction

@property (retain, nonatomic) NSMutableArray *exportSessions; // ivar: _exportSessions


+(BOOL)outputIsExemptFromTaintTrackingInheritance;
-(BOOL)setParameterState:(id)arg0 forKey:(id)arg1 ;
-(id)metadataForAsset:(id)arg0 newMetadata:(id)arg1 ;
-(id)nonEmptyStringValueForKey:(id)arg0 ;
-(void)cancel;
-(void)encodeItems:(id)arg0 metadata:(id)arg1 ;
-(void)finishRunningWithError:(id)arg0 ;
-(void)getMetadataItems:(id)arg0 ;
-(void)initializeParameters;
-(void)runAsynchronouslyWithInput:(id)arg0 ;
-(void)updateSpeedVisibility;


@end


#endif