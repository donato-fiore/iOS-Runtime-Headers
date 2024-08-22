// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUPICKEREXTENSIONHOSTCONTEXT_H
#define PUPICKEREXTENSIONHOSTCONTEXT_H

@class NSString;
@protocol _PUPickerExtensionContextHostInterface;


#import "PUPickerExtensionContext.h"

@interface PUPickerExtensionHostContext : PUPickerExtensionContext <_PUPickerExtensionContextHostInterface>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_PUPickerExtensionContextHostInterface> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)_pickerDidFinishPicking:(id)arg0 ;
-(void)_pickerDidSetModalInPresentation:(BOOL)arg0 ;


@end


#endif