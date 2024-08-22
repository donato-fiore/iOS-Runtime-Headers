// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHTEXTFEATURE_H
#define PHTEXTFEATURE_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PHTextFeature : NSObject <NSSecureCoding>



@property (nonatomic) NSUInteger origin; // ivar: _origin
@property (copy, nonatomic) NSString *string; // ivar: _string
@property (nonatomic) NSInteger type; // ivar: _type
@property (nonatomic) float weight; // ivar: _weight


+(BOOL)supportsSecureCoding;
+(id)_momentLocalIdentifierByAssetLocalIdentifiersForAssets:(id)arg0 ;
+(id)_textFeaturesByMomentLocalIdentifierForMomentLocalIdentifiers:(id)arg0 inPhotoLibrary:(id)arg1 ;
+(id)fetchTextFeaturesByAssetLocalIdentifierForAssets:(id)arg0 ;
+(id)stringForOrigin:(NSUInteger)arg0 ;
+(id)stringForType:(NSInteger)arg0 ;
+(id)textFeatureWithData:(id)arg0 ;
+(id)textFeatureWithType:(NSInteger)arg0 string:(id)arg1 weight:(float)arg2 origin:(NSUInteger)arg3 ;
-(id)description;
-(id)encodedData;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 string:(id)arg1 weight:(float)arg2 origin:(NSUInteger)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif