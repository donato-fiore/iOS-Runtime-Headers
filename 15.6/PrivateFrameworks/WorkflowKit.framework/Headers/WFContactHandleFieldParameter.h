// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFCONTACTHANDLEFIELDPARAMETER_H
#define WFCONTACTHANDLEFIELDPARAMETER_H



#import "WFContactFieldParameter.h"

@interface WFContactHandleFieldParameter : WFContactFieldParameter

@property (nonatomic) BOOL allowsCustomHandles;


-(Class)multipleStateClass;
-(Class)singleStateClass;
-(id)supportedContactProperties;


@end


#endif