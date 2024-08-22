// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDPROMOTIONMLMODELINPUT_H
#define EDPROMOTIONMLMODELINPUT_H

@class NSSet, NSDictionary;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface EDPromotionMLModelInput : NSObject <MLFeatureProvider>



@property (readonly, nonatomic) NSSet *featureNames;
@property (retain, nonatomic) NSDictionary *header_key_filtered; // ivar: _header_key_filtered
@property (nonatomic) CGFloat to_count; // ivar: _to_count


-(id)featureValueForName:(id)arg0 ;
-(id)initWithHeader_key_filtered:(id)arg0 to_count:(CGFloat)arg1 ;


@end


#endif