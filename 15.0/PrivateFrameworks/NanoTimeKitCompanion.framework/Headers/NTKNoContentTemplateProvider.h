// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKNOCONTENTTEMPLATEPROVIDER_H
#define NTKNOCONTENTTEMPLATEPROVIDER_H


#import <Foundation/Foundation.h>


@interface NTKNoContentTemplateProvider : NSObject



+(id)graphicCircularEmptyImageForDevice:(id)arg0 ;
+(id)graphicExtraLargeCircularEmptyImageForDevice:(id)arg0 ;
+(id)largeModularEmptyTextProvider;
+(id)largeRectangularEmptyTextProviderForDevice:(id)arg0 ;
+(id)templateForDisplayName:(id)arg0 image:(id)arg1 family:(NSInteger)arg2 device:(id)arg3 sdkVersion:(id)arg4 ;


@end


#endif