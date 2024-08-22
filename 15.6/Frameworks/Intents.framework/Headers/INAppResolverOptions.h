// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INAPPRESOLVEROPTIONS_H
#define INAPPRESOLVEROPTIONS_H

@class NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface INAppResolverOptions : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSDictionary *dictionary; // ivar: _dictionary
@property (readonly, nonatomic) BOOL includeUserActivityTypes;
@property (readonly, nonatomic) BOOL skipSupportedIntentsCheck;


+(BOOL)supportsSecureCoding;
+(id)optionsWithDictionary:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif