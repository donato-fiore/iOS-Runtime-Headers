// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFBUTTON_H
#define SFBUTTON_H

@class NSString, NSDictionary, NSData;
@protocol SFButton, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "SFImage.h"

@interface SFButton : NSObject <SFButton, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SFImage *image; // ivar: _image
@property (nonatomic) BOOL isSelected; // ivar: _isSelected
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SFImage *selectedImage; // ivar: _selectedImage
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)hasIsSelected;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif