// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXCURATEDLIBRARYLABELCONFIGURATION_H
#define PXCURATEDLIBRARYLABELCONFIGURATION_H

@class NSString, UIColor;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PXCuratedLibraryLabelConfiguration : NSObject <NSCopying>



@property (copy, nonatomic) NSString *text; // ivar: _text
@property (nonatomic) NSInteger textAlignment; // ivar: _textAlignment
@property (retain, nonatomic) UIColor *textColor; // ivar: _textColor


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif