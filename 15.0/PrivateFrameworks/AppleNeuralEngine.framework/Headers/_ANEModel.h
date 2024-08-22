// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _ANEMODEL_H
#define _ANEMODEL_H

@class NSString, NSDictionary, NSURL;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_ANEProgramForEvaluation.h"

@interface _ANEModel : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) NSUInteger intermediateBufferHandle; // ivar: _intermediateBufferHandle
@property (readonly, copy, nonatomic) NSString *key; // ivar: _key
@property (nonatomic) os_unfair_lock_s l; // ivar: _l
@property (retain, nonatomic) NSDictionary *modelAttributes; // ivar: _modelAttributes
@property (readonly, nonatomic) NSURL *modelURL; // ivar: _modelURL
@property (nonatomic) unsigned int perfStatsMask; // ivar: _perfStatsMask
@property (retain, nonatomic) _ANEProgramForEvaluation *program; // ivar: _program
@property (nonatomic) NSUInteger programHandle; // ivar: _programHandle
@property (nonatomic) char queueDepth; // ivar: _queueDepth
@property (nonatomic) NSUInteger state; // ivar: _state
@property (readonly, nonatomic) NSUInteger string_id; // ivar: _string_id


+(BOOL)supportsSecureCoding;
+(id)modelAtURL:(id)arg0 key:(id)arg1 ;
+(id)modelAtURL:(id)arg0 key:(id)arg1 modelAttributes:(id)arg2 ;
+(id)new;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToModel:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithModelAtURL:(id)arg0 key:(id)arg1 modelAttributes:(id)arg2 standardizeURL:(BOOL)arg3 ;
-(id)keyForBundleID:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateModelAttributes:(id)arg0 state:(NSUInteger)arg1 ;
-(void)updateModelAttributes:(id)arg0 state:(NSUInteger)arg1 programHandle:(NSUInteger)arg2 intermediateBufferHandle:(NSUInteger)arg3 queueDepth:(char)arg4 ;


@end


#endif