// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LAMANAGEDACMPARAMETERS_H
#define LAMANAGEDACMPARAMETERS_H

@class NSString, NSMutableData;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface LAManagedACMParameters : NSObject <NSCopying>

 {
    NSString *_description;
}


@property (readonly, nonatomic) *? acmParameters;
@property (readonly, nonatomic) unsigned int count; // ivar: _count
@property (readonly, nonatomic) NSMutableData *data; // ivar: _data


+(id)acmParameterSecureIntentSupport;
+(id)acmParameterWithMaxContinuityAge:(unsigned int)arg0 ;
+(id)acmParameterWithTimeOffset:(unsigned int)arg0 ;
+(id)acmParameterWithUserId:(unsigned int)arg0 ;
-(id)acmParameterByAppendingACMParameters:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithACMParamType:(unsigned int)arg0 bytes:(*void)arg1 length:(NSUInteger)arg2 description:(id)arg3 ;
-(struct ? *)findACMParameterWithType:(unsigned int)arg0 ;
-(void)_appendACMParameter:(id)arg0 ;


@end


#endif