// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFPIN_H
#define SFPIN_H

@class NSString, NSDictionary, NSData;
@protocol SFPin, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "SFLatLng.h"
#import "SFColor.h"

@interface SFPin : NSObject <SFPin, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (retain, nonatomic) SFLatLng *location; // ivar: _location
@property (copy, nonatomic) NSData *mapsData; // ivar: _mapsData
@property (nonatomic) int pinBehavior; // ivar: _pinBehavior
@property (retain, nonatomic) SFColor *pinColor; // ivar: _pinColor
@property (copy, nonatomic) NSString *pinText; // ivar: _pinText
@property (copy, nonatomic) NSString *resultID; // ivar: _resultID
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)hasPinBehavior;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif