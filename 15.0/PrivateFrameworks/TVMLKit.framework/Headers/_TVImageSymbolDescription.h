// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVIMAGESYMBOLDESCRIPTION_H
#define _TVIMAGESYMBOLDESCRIPTION_H

@class UIImageSymbolConfiguration, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _TVImageSymbolDescription : NSObject <NSCopying>



@property (retain, nonatomic) UIImageSymbolConfiguration *imageSymbolConfiguration; // ivar: _imageSymbolConfiguration
@property (readonly, copy, nonatomic) NSString *symbolName; // ivar: _symbolName


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSymbolName:(id)arg0 imageSymbolConfiguration:(id)arg1 ;


@end


#endif