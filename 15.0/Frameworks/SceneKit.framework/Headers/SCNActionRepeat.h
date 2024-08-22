// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCNACTIONREPEAT_H
#define SCNACTIONREPEAT_H



#import "SCNAction.h"

@interface SCNActionRepeat : SCNAction {
    *SCNCActionRepeat _mycaction;
    SCNAction *_repeatedAction;
}




+(BOOL)supportsSecureCoding;
+(id)repeatAction:(id)arg0 count:(NSUInteger)arg1 ;
+(id)repeatActionForever:(id)arg0 ;
-(BOOL)isCustom;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)reversedAction;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif