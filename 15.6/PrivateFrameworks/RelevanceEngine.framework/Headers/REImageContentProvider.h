// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REIMAGECONTENTPROVIDER_H
#define REIMAGECONTENTPROVIDER_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "REImage.h"

@interface REImageContentProvider : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) REImage *onePieceImage; // ivar: _onePieceImage
@property (readonly, nonatomic) REImage *twoPieceBackgroundImage; // ivar: _twoPieceBackgroundImage
@property (readonly, nonatomic) REImage *twoPieceForegroundImage; // ivar: _twoPieceForegroundImage


+(BOOL)supportsSecureCoding;
+(id)imageContentProviderFromClockKitImageProvider:(id)arg0 ;
+(id)imageContentProviderWithOnePieceImage:(id)arg0 ;
+(id)imageContentProviderWithOnePieceImage:(id)arg0 twoPieceForegroundImage:(id)arg1 twoPieceBackgroundImage:(id)arg2 ;
-(id)clockKitImageProviderRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithImage:(id)arg0 foregroundImage:(id)arg1 backgroundImage:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif