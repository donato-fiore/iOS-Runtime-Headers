// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXUNITCONVERTERFACTORY_H
#define SXUNITCONVERTERFACTORY_H

@class NSString;
@protocol SXUnitConverterFactory;

#import <Foundation/Foundation.h>


@interface SXUnitConverterFactory : NSObject <SXUnitConverterFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)createUnitConverterWithComponentWidth:(CGFloat)arg0 parentWidth:(CGFloat)arg1 layoutOptions:(id)arg2 ;


@end


#endif