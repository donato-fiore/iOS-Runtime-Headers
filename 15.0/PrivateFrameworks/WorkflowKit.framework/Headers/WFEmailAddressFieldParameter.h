// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFEMAILADDRESSFIELDPARAMETER_H
#define WFEMAILADDRESSFIELDPARAMETER_H



#import "WFContactHandleFieldParameter.h"

@interface WFEmailAddressFieldParameter : WFContactHandleFieldParameter



-(BOOL)allowsCustomHandles;
-(Class)multipleStateClass;
-(Class)singleStateClass;
-(id)supportedContactProperties;
-(void)setAllowsCustomHandles:(BOOL)arg0 ;


@end


#endif