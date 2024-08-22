// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXGTITLESUBTITLEVIEWCONFIGURATION_H
#define PXGTITLESUBTITLEVIEWCONFIGURATION_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "PXTitleSubtitleLabelSpec.h"

@interface PXGTitleSubtitleViewConfiguration : NSObject <NSCopying>



@property (copy, nonatomic) PXTitleSubtitleLabelSpec *spec; // ivar: _spec
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (copy, nonatomic) NSString *title; // ivar: _title


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif