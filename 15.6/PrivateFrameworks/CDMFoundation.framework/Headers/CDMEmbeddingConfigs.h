// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDMEMBEDDINGCONFIGS_H
#define CDMEMBEDDINGCONFIGS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface CDMEmbeddingConfigs : NSObject

@property (readonly, nonatomic) NSNumber *embeddingDimension; // ivar: _embeddingDimension


+(NSInteger)getDefaultEmbeddingDimension;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithEmbeddingDimension:(id)arg0 ;


@end


#endif