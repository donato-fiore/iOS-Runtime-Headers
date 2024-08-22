// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMCONTEXTUALACTIONPARAMETER_H
#define BMCONTEXTUALACTIONPARAMETER_H

@class NSDictionary, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BMContextualActionParameter : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSDictionary *parameterMetadata; // ivar: _parameterMetadata
@property (readonly, nonatomic) NSString *parameterType; // ivar: _parameterType


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(id)arg0 metadata:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif