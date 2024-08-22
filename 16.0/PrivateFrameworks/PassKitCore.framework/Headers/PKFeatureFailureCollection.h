// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKFEATUREFAILURECOLLECTION_H
#define PKFEATUREFAILURECOLLECTION_H

@class NSMutableDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKFeatureFailureCollection : NSObject <NSSecureCoding>

 {
    NSMutableDictionary *_failuresByFeature;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)errorForFeature:(NSUInteger)arg0 ;
-(id)initWithArray:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif