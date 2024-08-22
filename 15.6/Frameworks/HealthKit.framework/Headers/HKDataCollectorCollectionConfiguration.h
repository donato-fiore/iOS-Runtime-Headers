// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKDATACOLLECTORCOLLECTIONCONFIGURATION_H
#define HKDATACOLLECTORCOLLECTIONCONFIGURATION_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKDataCollectorCollectionConfiguration : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) CGFloat collectionInterval; // ivar: _collectionInterval
@property (nonatomic) CGFloat maxUnsentDatumAge; // ivar: _maxUnsentDatumAge


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCollectionInterval:(CGFloat)arg0 maxUnsentDatumAge:(CGFloat)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif