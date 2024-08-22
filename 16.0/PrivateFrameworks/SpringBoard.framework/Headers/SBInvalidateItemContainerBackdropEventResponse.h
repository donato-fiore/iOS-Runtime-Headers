// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBINVALIDATEITEMCONTAINERBACKDROPEVENTRESPONSE_H
#define SBINVALIDATEITEMCONTAINERBACKDROPEVENTRESPONSE_H



#import "SBSwitcherModifierEventResponse.h"

@interface SBInvalidateItemContainerBackdropEventResponse : SBSwitcherModifierEventResponse

@property (readonly, nonatomic) NSInteger updateMode; // ivar: _updateMode


-(NSInteger)type;
-(id)initWithUpdateMode:(NSInteger)arg0 ;


@end


#endif