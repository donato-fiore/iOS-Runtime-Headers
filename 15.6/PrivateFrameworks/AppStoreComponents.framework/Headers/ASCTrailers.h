// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASCTRAILERS_H
#define ASCTRAILERS_H

@class NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "ASCMediaPlatform.h"

@interface ASCTrailers : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) ASCMediaPlatform *mediaPlatform; // ivar: _mediaPlatform
@property (readonly, copy, nonatomic) NSArray *videos; // ivar: _videos


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVideos:(id)arg0 mediaPlatform:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif