// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSQUERYGENERATIONTOKEN_H
#define NSQUERYGENERATIONTOKEN_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NSQueryGenerationToken : NSObject <NSCopying, NSSecureCoding>





+(BOOL)supportsSecureCoding;
+(id)currentQueryGenerationToken;
+(id)nostoresQueryGenerationToken;
+(id)unpinnedQueryGenerationToken;
+(void)initialize;
-(BOOL)_isEnabled;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif