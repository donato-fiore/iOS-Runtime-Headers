// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFLATLNG_H
#define SFLATLNG_H

@class NSString, NSDictionary, NSData;
@protocol SFLatLng, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SFLatLng : NSObject <SFLatLng, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) CGFloat lat; // ivar: _lat
@property (nonatomic) CGFloat lng; // ivar: _lng
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)hasLat;
-(BOOL)hasLng;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif