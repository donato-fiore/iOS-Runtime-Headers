// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACACTIVITYCONTENT_H
#define ACACTIVITYCONTENT_H

@class NSData, NSDate;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface ACActivityContent : NSObject <NSCopying>



@property (copy, nonatomic) NSData *contentData; // ivar: _contentData
@property (nonatomic) CGFloat relevanceScore; // ivar: _relevanceScore
@property (copy, nonatomic) NSDate *staleDate; // ivar: _staleDate


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithContentData:(id)arg0 staleDate:(id)arg1 relevanceScore:(CGFloat)arg2 ;


@end


#endif