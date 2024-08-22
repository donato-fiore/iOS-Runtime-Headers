// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCURATEDLIBRARYLABELCONFIGURATION_H
#define PXCURATEDLIBRARYLABELCONFIGURATION_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PXCuratedLibraryLabelConfiguration : NSObject <NSCopying>



@property (copy, nonatomic) NSString *text; // ivar: _text
@property (nonatomic) NSInteger textAlignment; // ivar: _textAlignment


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif