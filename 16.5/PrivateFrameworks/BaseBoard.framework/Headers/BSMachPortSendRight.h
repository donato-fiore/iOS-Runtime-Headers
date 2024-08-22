// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BSMACHPORTSENDRIGHT_H
#define BSMACHPORTSENDRIGHT_H

@protocol NSCopying;


#import "BSMachPortRight.h"

@interface BSMachPortSendRight : BSMachPortRight <NSCopying>





+(char)_type;
+(id)bootstrapLookUpPortWithName:(id)arg0 ;
+(id)bootstrapLookUpWithName:(id)arg0 ;
+(id)taskNamePortForPID:(int)arg0 ;
+(id)wrapSendRight:(unsigned int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initFromReceiveRight:(id)arg0 ;
-(id)initWithCopyOfPort:(unsigned int)arg0 ;
-(id)initWithCopyOfRight:(id)arg0 ;
-(id)initWithNonRetainingPort:(unsigned int)arg0 ;
-(id)initWithPort:(unsigned int)arg0 ;
-(id)initWithSendRight:(unsigned int)arg0 ;
-(id)initWithSendRight:(unsigned int)arg0 assumeOwnership:(BOOL)arg1 ;
-(unsigned int)sendRight;


@end


#endif