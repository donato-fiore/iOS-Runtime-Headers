// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CIFEATUREPROVIDERIMAGE_H
#define CIFEATUREPROVIDERIMAGE_H

@class NSSet, NSString;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface CIFeatureProviderImage : NSObject <MLFeatureProvider>



@property (nonatomic) *__CVBuffer buffer; // ivar: buffer
@property (readonly, nonatomic) NSSet *featureNames;
@property (retain, nonatomic) NSString *name; // ivar: name


-(id)featureValueForName:(id)arg0 ;
-(id)initWithName:(id)arg0 buffer:(struct __CVBuffer *)arg1 ;


@end


#endif