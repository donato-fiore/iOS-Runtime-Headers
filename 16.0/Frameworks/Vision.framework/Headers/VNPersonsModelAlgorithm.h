// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNPERSONSMODELALGORITHM_H
#define VNPERSONSMODELALGORITHM_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface VNPersonsModelAlgorithm : NSObject <NSCopying, NSSecureCoding>



@property (readonly) Class faceModelClass;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif