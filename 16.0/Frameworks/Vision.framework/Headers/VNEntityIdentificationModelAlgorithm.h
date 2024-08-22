// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNENTITYIDENTIFICATIONMODELALGORITHM_H
#define VNENTITYIDENTIFICATIONMODELALGORITHM_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface VNEntityIdentificationModelAlgorithm : NSObject <NSCopying, NSSecureCoding>



@property (readonly) Class trainedModelClass;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif