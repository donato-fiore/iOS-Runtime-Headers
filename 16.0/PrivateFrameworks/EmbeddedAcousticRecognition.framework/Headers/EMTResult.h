// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EMTRESULT_H
#define EMTRESULT_H

@class NSLocale, NSString, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface EMTResult : NSObject <NSCopying>



@property (readonly, nonatomic) float confidence; // ivar: _confidence
@property (readonly, nonatomic) NSLocale *locale; // ivar: _locale
@property (readonly, nonatomic) BOOL lowConfidence; // ivar: _lowConfidence
@property (readonly, nonatomic) NSString *metaInfo; // ivar: _metaInfo
@property (readonly, nonatomic) NSArray *tokens; // ivar: _tokens


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithLocale:(id)arg0 tokens:(id)arg1 confidence:(float)arg2 lowConfidence:(BOOL)arg3 metaInfo:(id)arg4 ;


@end


#endif