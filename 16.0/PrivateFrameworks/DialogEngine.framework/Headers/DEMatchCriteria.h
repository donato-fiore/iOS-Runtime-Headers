// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DEMATCHCRITERIA_H
#define DEMATCHCRITERIA_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface DEMatchCriteria : NSObject

@property (retain, nonatomic) NSArray *prefixes; // ivar: _prefixes
@property (retain, nonatomic) NSArray *suffixes; // ivar: _suffixes


+(id)matchCriteriaFromPb:(*void)arg0 ;
+(void)matchCriteriaToPb:(id)arg0 matchCriteriaPb:(*void)arg1 ;
-(BOOL)all:(id)arg0 ;
-(BOOL)any:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithPrefixes:(id)arg0 suffixes:(id)arg1 ;


@end


#endif