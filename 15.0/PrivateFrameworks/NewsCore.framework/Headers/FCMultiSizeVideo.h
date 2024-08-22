// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCMULTISIZEVIDEO_H
#define FCMULTISIZEVIDEO_H

@class NSURL;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface FCMultiSizeVideo : NSObject <NSCopying>



@property (readonly, nonatomic) NSURL *large; // ivar: _large
@property (readonly, nonatomic) NSURL *small; // ivar: _small


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithConfigDictionary:(id)arg0 ;
-(id)initWithSmallVideoURL:(id)arg0 largeVideoURL:(id)arg1 ;


@end


#endif