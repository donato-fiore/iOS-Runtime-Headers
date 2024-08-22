// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKHIDE_H
#define SKHIDE_H



#import "SKAction.h"

@interface SKHide : SKAction {
    *SKCHide _mycaction;
}




+(BOOL)supportsSecureCoding;
+(id)hide;
+(id)unhide;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)reversedAction;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif