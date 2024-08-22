// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKDATACOLLECTORCOLLECTIONCONFIGURATION_H
#define HKDATACOLLECTORCOLLECTIONCONFIGURATION_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKDataCollectorCollectionConfiguration : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) CGFloat collectionInterval; // ivar: _collectionInterval
@property (nonatomic) CGFloat collectionLatency; // ivar: _collectionLatency
@property (nonatomic) NSUInteger collectionType; // ivar: _collectionType


+(BOOL)supportsSecureCoding;
+(id)new;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCollectionInterval:(CGFloat)arg0 collectionLatency:(CGFloat)arg1 collectionType:(NSUInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif