// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCNACTIONHIDE_H
#define SCNACTIONHIDE_H



#import "SCNAction.h"

@interface SCNActionHide : SCNAction {
    *SCNCActionHide _mycaction;
}




+(BOOL)supportsSecureCoding;
+(id)hide;
+(id)unhide;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)parameters;
-(id)reversedAction;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif