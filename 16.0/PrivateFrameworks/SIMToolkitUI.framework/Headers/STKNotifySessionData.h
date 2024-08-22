// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STKNOTIFYSESSIONDATA_H
#define STKNOTIFYSESSIONDATA_H



#import "STKTextSessionData.h"

@interface STKNotifySessionData : STKTextSessionData

@property (readonly, nonatomic) NSInteger notifyType; // ivar: _notifyType


-(id)initWithText:(id)arg0 simLabel:(id)arg1 notifyType:(NSInteger)arg2 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif