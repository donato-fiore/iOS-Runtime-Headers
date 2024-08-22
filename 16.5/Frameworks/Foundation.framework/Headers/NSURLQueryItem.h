// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSURLQUERYITEM_H
#define NSURLQUERYITEM_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "NSString.h"

@interface NSURLQueryItem : NSObject <NSSecureCoding, NSCopying>



@property (readonly) NSString *name; // ivar: _name
@property (readonly) NSString *value; // ivar: _value


+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)queryItemWithName:(id)arg0 value:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 value:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif