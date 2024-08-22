// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HSPLAYBACKCONTROLREQUEST_H
#define HSPLAYBACKCONTROLREQUEST_H



#import "HSRequest.h"

@interface HSPlaybackControlRequest : HSRequest

@property (readonly, nonatomic) NSInteger controlCommand; // ivar: _controlCommand
@property (readonly, nonatomic) unsigned int interfaceID; // ivar: _interfaceID


-(id)initWithInterfaceID:(unsigned int)arg0 controlCommand:(NSInteger)arg1 ;


@end


#endif