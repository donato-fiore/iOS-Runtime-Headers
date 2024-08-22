// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXEVENTACCELEROMETERINFOREPRESENTATION_H
#define AXEVENTACCELEROMETERINFOREPRESENTATION_H

@class NSString;
@protocol AXEventRepresentationDescription, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface AXEventAccelerometerInfoRepresentation : NSObject <AXEventRepresentationDescription, NSSecureCoding, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int type; // ivar: _type
@property (nonatomic) float x; // ivar: _x
@property (nonatomic) float y; // ivar: _y
@property (nonatomic) float z; // ivar: _z


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif