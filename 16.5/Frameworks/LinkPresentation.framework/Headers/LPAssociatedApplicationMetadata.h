// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LPASSOCIATEDAPPLICATIONMETADATA_H
#define LPASSOCIATEDAPPLICATIONMETADATA_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "LPImage.h"

@interface LPAssociatedApplicationMetadata : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *action; // ivar: _action
@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (copy, nonatomic) NSString *caption; // ivar: _caption
@property (nonatomic) NSInteger clipAction; // ivar: _clipAction
@property (retain, nonatomic) LPImage *icon; // ivar: _icon


+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffecting_dummyPropertyForObservation;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif