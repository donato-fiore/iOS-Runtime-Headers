// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUPICKEREXTENSIONVENDORCONTEXT_H
#define PUPICKEREXTENSIONVENDORCONTEXT_H

@class NSString;
@protocol _PUPickerExtensionContextVendorInterface;


#import "PUPickerExtensionContext.h"

@interface PUPickerExtensionVendorContext : PUPickerExtensionContext <_PUPickerExtensionContextVendorInterface>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_PUPickerExtensionContextVendorInterface> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)_deselectAssetsWithIdentifiers:(id)arg0 ;
-(void)_moveAssetWithIdentifier:(id)arg0 afterIdentifier:(id)arg1 ;
-(void)_popViewControllerWithReply:(id)arg0 ;
-(void)_searchWithString:(id)arg0 ;
-(void)_startActivityIndicatorsForAssetsWithIdentifiers:(id)arg0 ;
-(void)_stopActivityIndicatorsForAssetsWithIdentifiers:(id)arg0 ;
-(void)_updateConfiguration:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif