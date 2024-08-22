// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTCV9PASSKITUI17ADDRESSEDITORVIEW11COORDINATOR_H
#define _TTCV9PASSKITUI17ADDRESSEDITORVIEW11COORDINATOR_H

@protocol PKAddressEditorViewControllerDelegate;

#import <Foundation/Foundation.h>


@interface _TtCV9PassKitUI17AddressEditorView11Coordinator : NSObject <PKAddressEditorViewControllerDelegate>

 {
    ? address;
    ? dismiss;
}




-(id)init;
-(void)addressEditorViewController:(id)arg0 selectedContact:(id)arg1 ;
-(void)addressEditorViewControllerDidCancel:(id)arg0 ;


@end


#endif