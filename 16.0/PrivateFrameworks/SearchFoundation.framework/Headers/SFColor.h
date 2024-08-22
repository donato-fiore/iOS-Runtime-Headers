// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFCOLOR_H
#define SFCOLOR_H

@class NSString, NSDictionary, NSData;
@protocol SFColor, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SFColor : NSObject <SFColor, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat alphaComponent; // ivar: _alphaComponent
@property (nonatomic) CGFloat blueComponent; // ivar: _blueComponent
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (nonatomic) CGFloat greenComponent; // ivar: _greenComponent
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) CGFloat redComponent; // ivar: _redComponent
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)hasAlphaComponent;
-(BOOL)hasBlueComponent;
-(BOOL)hasGreenComponent;
-(BOOL)hasRedComponent;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif