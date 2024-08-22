// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MCSIGNPOST_H
#define MCSIGNPOST_H

@class NSString, NSDate;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MCSignpost : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSString *feature; // ivar: _feature
@property (readonly, copy, nonatomic) NSString *process; // ivar: _process
@property (readonly, copy, nonatomic) NSDate *timestamp; // ivar: _timestamp
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithProcess:(id)arg0 type:(NSUInteger)arg1 feature:(id)arg2 timestamp:(id)arg3 ;


@end


#endif