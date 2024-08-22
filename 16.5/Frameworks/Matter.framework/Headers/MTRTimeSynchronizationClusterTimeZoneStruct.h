// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRTIMESYNCHRONIZATIONCLUSTERTIMEZONESTRUCT_H
#define MTRTIMESYNCHRONIZATIONCLUSTERTIMEZONESTRUCT_H

@class NSString, NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRTimeSynchronizationClusterTimeZoneStruct : NSObject <NSCopying>



@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSNumber *offset; // ivar: _offset
@property (copy, nonatomic) NSNumber *validAt; // ivar: _validAt


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif