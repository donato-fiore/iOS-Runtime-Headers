// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPKREMOTEPASSSELECTIONFIELDDETECTORLISTENER_H
#define NPKREMOTEPASSSELECTIONFIELDDETECTORLISTENER_H

@class NSString;
@protocol NPKPassSelectionFieldDetectorAssertionDelegate;


#import "NPKPassSelectionFieldDetectorListener.h"
#import "NPKPassSelectionFieldDetectorAssertion.h"

@interface NPKRemotePassSelectionFieldDetectorListener : NPKPassSelectionFieldDetectorListener <NPKPassSelectionFieldDetectorAssertionDelegate>

 {
    NPKPassSelectionFieldDetectorAssertion *_assertion;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)passSelectionFieldDetectorAssertion:(id)arg0 didEnterFieldForPassWithUniqueID:(id)arg1 ;


@end


#endif