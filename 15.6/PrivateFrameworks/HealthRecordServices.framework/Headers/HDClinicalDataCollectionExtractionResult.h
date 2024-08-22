// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCLINICALDATACOLLECTIONEXTRACTIONRESULT_H
#define HDCLINICALDATACOLLECTIONEXTRACTIONRESULT_H

@class NSArray, NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HDClinicalDataCollectionExtractionResult : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *redactedResources; // ivar: _redactedResources
@property (readonly, copy, nonatomic) NSNumber *rulesVersion; // ivar: _rulesVersion


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRedactedResources:(id)arg0 rulesVersion:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif