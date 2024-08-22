// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NLMODELCONFIGURATION_H
#define NLMODELCONFIGURATION_H

@class NSString, NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NLModelConfiguration : NSObject <NSCopying, NSSecureCoding>

 {
    NSInteger _type;
    NSUInteger _revision;
    NSString *_language;
    NSDictionary *_options;
}


@property (readonly, copy) NSString *language;
@property (readonly) NSUInteger revision;
@property (readonly) NSInteger type;


+(BOOL)supportsSecureCoding;
+(NSUInteger)currentRevisionForType:(NSInteger)arg0 ;
+(id)defaultModelConfigurationForType:(NSInteger)arg0 ;
+(id)defaultModelConfigurationForType:(NSInteger)arg0 options:(id)arg1 error:(*id)arg2 ;
+(id)supportedRevisionsForType:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)embeddingData;
-(id)embeddingModel;
-(id)embeddingURL;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithModelType:(NSInteger)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)options;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif