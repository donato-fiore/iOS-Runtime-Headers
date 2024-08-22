// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPKPASSSELECTIONFIELDDETECTORASSERTION_H
#define NPKPASSSELECTIONFIELDDETECTORASSERTION_H

@protocol NPKPassSelectionFieldDetectorAssertionDelegate;


#import "NPKTransientAssertion.h"

@interface NPKPassSelectionFieldDetectorAssertion : NPKTransientAssertion

@property (weak, nonatomic) NSObject<NPKPassSelectionFieldDetectorAssertionDelegate> *delegate; // ivar: _delegate


-(id)initWithQueue:(id)arg0 ;
-(void)_resyncState;
-(void)didEnterFieldForPassWithUniqueID:(id)arg0 ;


@end


#endif