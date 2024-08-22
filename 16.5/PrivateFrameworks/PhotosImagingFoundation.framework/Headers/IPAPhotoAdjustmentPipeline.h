// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IPAPHOTOADJUSTMENTPIPELINE_H
#define IPAPHOTOADJUSTMENTPIPELINE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface IPAPhotoAdjustmentPipeline : NSObject

@property (readonly, nonatomic) NSString *platform; // ivar: _platform
@property (readonly, nonatomic) NSUInteger version; // ivar: _version


+(id)current;
+(id)pipelineForPlatform:(id)arg0 version:(NSUInteger)arg1 ;
+(id)pipelineForVersion:(NSUInteger)arg0 ;
+(id)pipelineFromString:(id)arg0 ;
+(void)initialize;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAdjustmentPipeline:(id)arg0 ;
-(NSUInteger)hash;
-(id)debugDescription;
-(id)description;
-(id)initWithPlatform:(id)arg0 version:(NSUInteger)arg1 ;
-(id)string;


@end


#endif