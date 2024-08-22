// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSVPAIR_H
#define MSVPAIR_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface MSVPair : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) id *first; // ivar: _first
@property (readonly, nonatomic) id *second; // ivar: _second


+(BOOL)supportsSecureCoding;
+(id)pairWithFirst:(id)arg0 second:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFirst:(id)arg0 second:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif