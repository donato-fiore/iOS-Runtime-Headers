// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDLOCALFEATUREATTRIBUTESPROVIDER_H
#define HDLOCALFEATUREATTRIBUTESPROVIDER_H

@class HKFeatureAttributes, HKPairedFeatureAttributes, NSString;
@protocol HDPairedFeatureAttributesProviding;

#import <Foundation/Foundation.h>


@interface HDLocalFeatureAttributesProvider : NSObject <HDPairedFeatureAttributesProviding>

 {
    HKFeatureAttributes *_localFeatureAttributes;
}


@property (readonly, copy, nonatomic) HKPairedFeatureAttributes *currentPairedFeatureAttributes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithLocalFeatureAttributes:(id)arg0 ;


@end


#endif