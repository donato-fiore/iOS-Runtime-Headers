// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHENCODEDSTROKEIDENTIFIER_H
#define CHENCODEDSTROKEIDENTIFIER_H

@class NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CHEncodedStrokeIdentifier : NSObject <NSCopying, NSSecureCoding>

 {
    NSUInteger _savedHash;
}


@property (readonly, retain, nonatomic) NSData *encodedStrokeIdentifier; // ivar: _encodedStrokeIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCHEncodedStrokeIdentifier:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif