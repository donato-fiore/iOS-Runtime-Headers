// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPSIRIQUERYRESULT_H
#define PPSIRIQUERYRESULT_H

@class NSNumber, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PPSiriQueryResult : NSObject <NSCopying>



@property (readonly, nonatomic) NSNumber *confidence; // ivar: _confidence
@property (readonly, nonatomic) NSString *domain; // ivar: _domain
@property (readonly, nonatomic) NSString *qid; // ivar: _qid


+(id)siriQueryResultWithQid:(id)arg0 domain:(id)arg1 confidence:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSiriQueryResult:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithQid:(id)arg0 domain:(id)arg1 confidence:(id)arg2 ;


@end


#endif