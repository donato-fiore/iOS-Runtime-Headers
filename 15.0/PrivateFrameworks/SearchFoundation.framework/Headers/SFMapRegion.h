// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFMAPREGION_H
#define SFMAPREGION_H

@class NSString, NSDictionary, NSData;
@protocol SFMapRegion, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SFMapRegion : NSObject <SFMapRegion, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (nonatomic) CGFloat eastLng; // ivar: _eastLng
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) CGFloat northLat; // ivar: _northLat
@property (nonatomic) CGFloat southLat; // ivar: _southLat
@property (readonly) Class superclass;
@property (nonatomic) CGFloat westLng; // ivar: _westLng


+(BOOL)supportsSecureCoding;
-(BOOL)hasEastLng;
-(BOOL)hasNorthLat;
-(BOOL)hasSouthLat;
-(BOOL)hasWestLng;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif