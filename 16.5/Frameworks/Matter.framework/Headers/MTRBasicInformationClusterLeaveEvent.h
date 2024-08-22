// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRBASICINFORMATIONCLUSTERLEAVEEVENT_H
#define MTRBASICINFORMATIONCLUSTERLEAVEEVENT_H

@class NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRBasicInformationClusterLeaveEvent : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *fabricIndex; // ivar: _fabricIndex


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif