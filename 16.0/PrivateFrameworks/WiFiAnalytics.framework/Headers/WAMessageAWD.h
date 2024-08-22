// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WAMESSAGEAWD_H
#define WAMESSAGEAWD_H

@class NSString, NSMutableDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WAMessageAWD : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) BOOL isRootMessage; // ivar: _isRootMessage
@property (readonly, nonatomic) NSString *key; // ivar: _key
@property (readonly, nonatomic) NSUInteger metricID; // ivar: _metricID
@property (readonly, nonatomic) NSMutableDictionary *mutableFields; // ivar: _mutableFields
@property (readonly, nonatomic) NSString *originalClassName; // ivar: _originalClassName
@property (readonly, nonatomic) NSString *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)fieldForKey:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKey:(id)arg0 andFields:(id)arg1 isRootMessage:(BOOL)arg2 originalClassName:(id)arg3 uuid:(id)arg4 ;
-(void)addField:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif