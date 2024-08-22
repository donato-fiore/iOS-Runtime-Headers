// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OZARPLANEINFO_H
#define OZARPLANEINFO_H

@class NSNumber, NSValue, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface OZARPlaneInfo : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSNumber *alignment; // ivar: _alignment
@property (retain, nonatomic) NSValue *center; // ivar: _center
@property (retain, nonatomic) NSNumber *classification; // ivar: _classification
@property (retain, nonatomic) NSValue *extent; // ivar: _extent
@property (retain, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (retain, nonatomic) NSValue *transform; // ivar: _transform


+(BOOL)supportsSecureCoding;
+(id)planeListWithARFrame:(id)arg0 ;
+(id)planeListWithAnchors:(id)arg0 ;
-(id)initWithARPlaneAnchor:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(struct ? )simdTransform;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif