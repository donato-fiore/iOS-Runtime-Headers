// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SRFETCHREQUEST_H
#define SRFETCHREQUEST_H


#import <Foundation/Foundation.h>

#import "SRDevice.h"

@interface SRFetchRequest : NSObject

@property (retain) SRDevice *device; // ivar: _device
@property CGFloat from; // ivar: _from
@property CGFloat to; // ivar: _to


-(id)init;
-(void)dealloc;


@end


#endif