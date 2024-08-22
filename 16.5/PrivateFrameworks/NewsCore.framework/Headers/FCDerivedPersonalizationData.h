// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCDERIVEDPERSONALIZATIONDATA_H
#define FCDERIVEDPERSONALIZATIONDATA_H

@class NSDictionary, NSString;
@protocol FCDerivedPersonalizationData, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface FCDerivedPersonalizationData : NSObject <FCDerivedPersonalizationData, NSSecureCoding, NSCopying>

 {
    NSDictionary *_aggregatesByFeatureKey;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)aggregateForFeatureKey:(id)arg0 ;
-(id)aggregatesForFeatureKeys:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif