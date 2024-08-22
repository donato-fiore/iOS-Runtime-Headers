// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPASSDISPLAYPROFILE_H
#define PKPASSDISPLAYPROFILE_H

@class NSData;
@protocol NSSecureCoding, NSCopying;


#import "PKDisplayProfile.h"
#import "PKColor.h"

@interface PKPassDisplayProfile : PKDisplayProfile <NSSecureCoding, NSCopying>



@property (retain, nonatomic) PKColor *backgroundColor; // ivar: _backgroundColor
@property (retain, nonatomic) PKColor *foregroundColor; // ivar: _foregroundColor
@property (nonatomic) BOOL hasBackgroundImage; // ivar: _hasBackgroundImage
@property (nonatomic) BOOL hasStripImage; // ivar: _hasStripImage
@property (retain, nonatomic) PKColor *labelColor; // ivar: _labelColor
@property (readonly, nonatomic) NSInteger layoutMode;
@property (retain, nonatomic) NSData *manifestHash; // ivar: _manifestHash
@property (nonatomic) NSInteger passStyle; // ivar: _passStyle
@property (retain, nonatomic) PKColor *secondaryBackgroundColor; // ivar: _secondaryBackgroundColor
@property (readonly, nonatomic) BOOL showsBackgroundImage;
@property (readonly, nonatomic) BOOL showsStripImage;
@property (retain, nonatomic) PKColor *stripColor; // ivar: _stripColor
@property (nonatomic) BOOL tallCode; // ivar: _tallCode


+(BOOL)supportsSecureCoding;
-(NSInteger)type;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 bundle:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif