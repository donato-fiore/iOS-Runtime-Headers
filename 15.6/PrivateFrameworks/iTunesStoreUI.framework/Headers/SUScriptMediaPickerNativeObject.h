// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUSCRIPTMEDIAPICKERNATIVEOBJECT_H
#define SUSCRIPTMEDIAPICKERNATIVEOBJECT_H

@class NSString;
@protocol MPMediaPickerControllerDelegate;


#import "SUScriptViewControllerNativeObject.h"

@interface SUScriptMediaPickerNativeObject : SUScriptViewControllerNativeObject <MPMediaPickerControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)destroyNativeObject;
-(void)mediaPicker:(id)arg0 didPickMediaItems:(id)arg1 ;
-(void)mediaPickerDidCancel:(id)arg0 ;
-(void)setupNativeObject;


@end


#endif