// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASCSCREENSHOTS_H
#define ASCSCREENSHOTS_H

@class NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "ASCMediaPlatform.h"

@interface ASCScreenshots : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSArray *artwork; // ivar: _artwork
@property (readonly, copy, nonatomic) ASCMediaPlatform *mediaPlatform; // ivar: _mediaPlatform


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithArtwork:(id)arg0 mediaPlatform:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif