// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNDETECTIONPRINT_H
#define VNDETECTIONPRINT_H

@class NSDictionary;
@protocol NSCopying, NSSecureCoding, VNRequestRevisionProviding, VNOriginatingRequestSpecifierProviding;

#import <Foundation/Foundation.h>

#import "VNRequestSpecifier.h"

@interface VNDetectionprint : NSObject <NSCopying, NSSecureCoding, VNRequestRevisionProviding, VNOriginatingRequestSpecifierProviding>

 {
    NSDictionary *_tensorsDictionary;
    VNRequestSpecifier *_originatingRequestSpecifier;
}


@property (readonly) VNRequestSpecifier *originatingRequestSpecifier;
@property (readonly, nonatomic) NSUInteger requestRevision;


+(BOOL)supportsSecureCoding;
+(id)knownTensorKeysForRequestRevision:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTensorsDictionary:(id)arg0 originatingRequestSpecifier:(id)arg1 ;
-(id)initWithTensorsDictionary:(id)arg0 requestRevision:(NSUInteger)arg1 ;
-(id)tensorForKey:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif