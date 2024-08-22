// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHASEEXTERNALSTREAMCOLLECTION_H
#define PHASEEXTERNALSTREAMCOLLECTION_H

@class NSUUID;

#import <Foundation/Foundation.h>


@interface PHASEExternalStreamCollection : NSObject

@property (readonly, nonatomic) NSUInteger streamCount; // ivar: _streamCount
@property (readonly, nonatomic) NSInteger streamType; // ivar: _streamType
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid


+(id)new;
-(id)init;
-(id)initWithStreamType:(NSInteger)arg0 count:(NSUInteger)arg1 ;


@end


#endif