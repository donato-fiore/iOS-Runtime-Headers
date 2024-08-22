// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _RCPEVENTACTIONSETPOINTERLOCATION_H
#define _RCPEVENTACTIONSETPOINTERLOCATION_H



#import "RCPEventAction.h"

@interface _RCPEventActionSetPointerLocation : RCPEventAction

@property (nonatomic) CGPoint modelPoint; // ivar: _modelPoint


-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)play;


@end


#endif