// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SRFETCHRESULT_H
#define SRFETCHRESULT_H

@class NSDictionary, NSData;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SRFetchResult : NSObject <NSCopying>



@property (retain) NSDictionary *configuration; // ivar: _configuration
@property (retain) NSDictionary *metadata; // ivar: _metadata
@property (readonly, copy) id *sample;
@property (retain) Class sampleClass; // ivar: _sampleClass
@property (retain) NSData *sampleData; // ivar: _sampleData
@property (readonly) CGFloat timestamp; // ivar: _timestamp


+(id)new;
+(void)initialize;
-(id)_sensorConfiguration;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 timestamp:(CGFloat)arg1 metadata:(id)arg2 configuration:(id)arg3 sampleClass:(Class)arg4 ;
-(void)dealloc;


@end


#endif