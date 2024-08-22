// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPSASSETSIZES_H
#define TPSASSETSIZES_H

@protocol NSCopying, NSSecureCoding;


#import "TPSSerializableObject.h"
#import "TPSSizes.h"

@interface TPSAssetSizes : TPSSerializableObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) TPSSizes *collectionFeatured; // ivar: _collectionFeatured
@property (retain, nonatomic) TPSSizes *tip; // ivar: _tip
@property (retain, nonatomic) TPSSizes *tipIntro; // ivar: _tipIntro


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif