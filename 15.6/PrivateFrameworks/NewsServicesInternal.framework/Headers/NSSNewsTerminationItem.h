// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSSNEWSTERMINATIONITEM_H
#define NSSNEWSTERMINATIONITEM_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NSSNewsTerminationItem : NSObject <NSCopying>



@property (copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (nonatomic) NSUInteger processType; // ivar: _processType


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithProcessType:(NSUInteger)arg0 bundleID:(id)arg1 ;


@end


#endif