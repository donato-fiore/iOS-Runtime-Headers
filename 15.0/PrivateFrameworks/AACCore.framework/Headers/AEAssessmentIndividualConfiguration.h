// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AEASSESSMENTINDIVIDUALCONFIGURATION_H
#define AEASSESSMENTINDIVIDUALCONFIGURATION_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface AEAssessmentIndividualConfiguration : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) BOOL allowsNetworkAccess; // ivar: _allowsNetworkAccess


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif