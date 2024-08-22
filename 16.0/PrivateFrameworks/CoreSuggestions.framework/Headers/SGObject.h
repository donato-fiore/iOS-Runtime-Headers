// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGOBJECT_H
#define SGOBJECT_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SGOrigin.h"
#import "SGRecordId.h"

@interface SGObject : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) SGOrigin *origin; // ivar: _origin
@property (readonly, nonatomic) SGRecordId *recordId; // ivar: _recordId


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSuggestion:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRecordId:(id)arg0 origin:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif