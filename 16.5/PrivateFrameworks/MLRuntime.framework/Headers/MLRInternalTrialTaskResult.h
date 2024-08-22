// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLRINTERNALTRIALTASKRESULT_H
#define MLRINTERNALTRIALTASKRESULT_H

@class NSDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface MLRInternalTrialTaskResult : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSDictionary *JSONResult; // ivar: _JSONResult


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithJSONResult:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif