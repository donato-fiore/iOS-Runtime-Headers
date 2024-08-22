// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UICOMMANDIDENTIFIER_H
#define _UICOMMANDIDENTIFIER_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _UICommandIdentifier : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) SEL action; // ivar: _action
@property (readonly, nonatomic) id *propertyList; // ivar: _propertyList


+(BOOL)supportsSecureCoding;
+(id)identifierWithAction:(SEL)arg0 propertyList:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAction:(SEL)arg0 propertyList:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif