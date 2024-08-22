// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPLANE_H
#define CPLANE_H

@class NSString, NSMeasurement, NSArray;
@protocol CPAccNavUpdateProtocol, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CPLane : NSObject <CPAccNavUpdateProtocol, NSCopying, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) unsigned short index;
@property (nonatomic) unsigned short index; // ivar: _index
@property (retain, nonatomic) NSMeasurement *primaryAngle; // ivar: _primaryAngle
@property (retain, nonatomic) NSArray *secondaryAngles; // ivar: _secondaryAngles
@property (nonatomic) unsigned char status; // ivar: _status
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)accNavParameters;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif