// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CNUIUSERACTIONDIRECTIONSTARGET_H
#define _CNUIUSERACTIONDIRECTIONSTARGET_H



#import "CNUIUserActionTarget.h"

@interface _CNUIUserActionDirectionsTarget : CNUIUserActionTarget



+(id)mapsUrlFromLabeledValue:(id)arg0 contact:(id)arg1 ;
+(id)queryBySanitizingQuery:(id)arg0 ;
+(id)queryByTrimmingEmptySpaceInQuery:(id)arg0 ;
-(id)actionsForPostalAddresses:(id)arg0 contact:(id)arg1 discoveringEnvironment:(id)arg2 ;
-(id)init;


@end


#endif