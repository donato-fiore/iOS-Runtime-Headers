// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTCV16_PASSKIT_SWIFTUIP33_541E15F1A3504E1B411D8ADFDBE1A4E241ADDSECUREELEMENTPASSVIEWCONTROLLERWRAPPER11COORDINATOR_H
#define _TTCV16_PASSKIT_SWIFTUIP33_541E15F1A3504E1B411D8ADFDBE1A4E241ADDSECUREELEMENTPASSVIEWCONTROLLERWRAPPER11COORDINATOR_H

@protocol PKAddSecureElementPassViewControllerDelegate;

#import <Foundation/Foundation.h>


@interface _TtCV16_PassKit_SwiftUIP33_541E15F1A3504E1B411D8ADFDBE1A4E241AddSecureElementPassViewControllerWrapper11Coordinator : NSObject <PKAddSecureElementPassViewControllerDelegate>

 {
    ? completion;
}




-(id)init;
-(void)addSecureElementPassViewController:(id)arg0 didFinishAddingSecureElementPass:(id)arg1 error:(id)arg2 ;
-(void)addSecureElementPassViewController:(id)arg0 didFinishAddingSecureElementPasses:(id)arg1 error:(id)arg2 ;


@end


#endif