// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNASYNCSTATUS_H
#define VNASYNCSTATUS_H

@class NSError;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface VNAsyncStatus : NSObject <NSCopying>



@property (readonly, nonatomic) BOOL completed; // ivar: _completed
@property (readonly, nonatomic) NSError *error; // ivar: _error


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithStatus:(BOOL)arg0 error:(id)arg1 ;


@end


#endif