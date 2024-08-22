// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNRECOGNIZEDPOINTSSPECIFIER_H
#define VNRECOGNIZEDPOINTSSPECIFIER_H

@class NSDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "VNRequestSpecifier.h"

@interface VNRecognizedPointsSpecifier : NSObject <NSSecureCoding, NSCopying>

 {
    VNRequestSpecifier *_originatingRequestSpecifier;
    NSDictionary *_allRecognizedPoints;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)availableGroupKeys;
-(id)availableKeys;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOriginatingRequestSpecifier:(id)arg0 allRecognizedPoints:(id)arg1 ;
-(id)originatingRequestSpecifier;
-(id)pointKeyGroupLabelsMapping;
-(id)populatedMLMultiArrayAndReturnError:(*id)arg0 ;
-(id)recognizedPointForKey:(id)arg0 error:(*id)arg1 ;
-(id)recognizedPointsForGroupKey:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif