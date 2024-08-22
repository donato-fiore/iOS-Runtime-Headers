// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SBSYSTEMAPERTURELAYOUTMONITORASSERTIONWRAPPER_H
#define _SBSYSTEMAPERTURELAYOUTMONITORASSERTIONWRAPPER_H

@class BSSimpleAssertion, BSServiceConnection, NSString;
@protocol SAInvalidatable;



@interface _SBSystemApertureLayoutMonitorAssertionWrapper : BSSimpleAssertion

@property (weak, nonatomic) BSServiceConnection *associatedConnection; // ivar: _associatedConnection
@property (copy, nonatomic) NSString *invalidationReason; // ivar: _invalidationReason
@property (retain, nonatomic) NSObject<SAInvalidatable> *wrappedAssertion; // ivar: _wrappedAssertion




@end


#endif