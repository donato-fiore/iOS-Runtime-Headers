// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRAUDIOOUTPUTCLUSTEROUTPUTINFOSTRUCT_H
#define MTRAUDIOOUTPUTCLUSTEROUTPUTINFOSTRUCT_H

@class NSNumber, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRAudioOutputClusterOutputInfoStruct : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *index; // ivar: _index
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSNumber *outputType; // ivar: _outputType


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif