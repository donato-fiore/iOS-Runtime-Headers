// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYMUSICCURATIONPROVIDEROPTIONS_H
#define PXSTORYMUSICCURATIONPROVIDEROPTIONS_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PXStoryMusicCurationProviderOptions : NSObject <NSCopying>



@property (copy, nonatomic) NSArray *categories; // ivar: _categories
@property (nonatomic) NSUInteger logContext; // ivar: _logContext


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif