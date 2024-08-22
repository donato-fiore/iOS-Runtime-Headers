// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYMUSICCURATIONPROVIDEROPTIONS_H
#define PXSTORYMUSICCURATIONPROVIDEROPTIONS_H

@class NSSet;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PXStoryMusicCurationProviderOptions : NSObject <NSCopying>



@property (copy, nonatomic) NSSet *categories; // ivar: _categories
@property (nonatomic) NSUInteger logContext; // ivar: _logContext


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)addCategory:(id)arg0 ;


@end


#endif