// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SNCLASSIFIERVARIANT_H
#define SNCLASSIFIERVARIANT_H

@class NSString;
@protocol NSCopying, NSSecureCoding, SNMLModel;

#import <Foundation/Foundation.h>


@interface SNClassifierVariant : NSObject <NSCopying, NSSecureCoding>

 {
    NSInteger _type;
    id<SNMLModel> *_mlModel;
    NSString *_classifierIdentifier;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif