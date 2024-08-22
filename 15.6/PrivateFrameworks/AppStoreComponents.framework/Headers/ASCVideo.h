// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASCVIDEO_H
#define ASCVIDEO_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "ASCArtwork.h"

@interface ASCVideo : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) ASCArtwork *preview; // ivar: _preview
@property (readonly, copy, nonatomic) NSString *videoURL; // ivar: _videoURL


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVideoURL:(id)arg0 preview:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif