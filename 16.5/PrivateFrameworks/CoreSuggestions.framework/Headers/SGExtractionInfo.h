// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGEXTRACTIONINFO_H
#define SGEXTRACTIONINFO_H

@class NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SGExtractionInfo : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSNumber *confidence; // ivar: _confidence
@property (readonly, nonatomic) NSUInteger extractionType; // ivar: _extractionType
@property (readonly, nonatomic) NSNumber *modelVersion; // ivar: _modelVersion


+(BOOL)supportsSecureCoding;
+(id)extractionInfoWithExtractionType:(NSUInteger)arg0 modelVersion:(id)arg1 confidence:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExtractionType:(NSUInteger)arg0 modelVersion:(id)arg1 confidence:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif