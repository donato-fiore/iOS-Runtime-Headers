// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LPARTWORKMETADATA_H
#define LPARTWORKMETADATA_H

@class NSURL, NSDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface LPArtworkMetadata : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSURL *URL; // ivar: _URL
@property (copy, nonatomic) NSDictionary *colors; // ivar: _colors
@property (readonly, nonatomic) unsigned int version; // ivar: _version


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif