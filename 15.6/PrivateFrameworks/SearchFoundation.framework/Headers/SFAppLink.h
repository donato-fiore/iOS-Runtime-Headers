// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFAPPLINK_H
#define SFAPPLINK_H

@class NSString, NSDictionary, NSData;
@protocol SFAppLink, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "SFPunchout.h"
#import "SFImage.h"

@interface SFAppLink : NSObject <SFAppLink, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) SFPunchout *appPunchout; // ivar: _appPunchout
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SFImage *image; // ivar: _image
@property (nonatomic) int imageAlign; // ivar: _imageAlign
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(BOOL)hasImageAlign;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif