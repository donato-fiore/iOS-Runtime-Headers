// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLPHOTOEDITIMPORTPROPERTIES_H
#define PLPHOTOEDITIMPORTPROPERTIES_H


#import <Foundation/Foundation.h>


@interface PLPhotoEditImportProperties : NSObject

@property (readonly, nonatomic) CGFloat baseDuration; // ivar: _baseDuration
@property (readonly, nonatomic) NSInteger baseEXIFOrientation; // ivar: _baseEXIFOrientation


+(id)importPropertiesWithEXIFOrientation:(NSInteger)arg0 ;
+(id)importPropertiesWithEXIFOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;


@end


#endif