// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ISGRAPHICICONCONFIGURATION_H
#define ISGRAPHICICONCONFIGURATION_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface ISGraphicIconConfiguration : NSObject <NSCopying>



@property (copy, nonatomic) NSArray *enclosureColors; // ivar: _enclosureColors
@property (nonatomic) NSInteger renderingMode; // ivar: _renderingMode
@property (copy, nonatomic) NSArray *symbolColors; // ivar: _symbolColors


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif