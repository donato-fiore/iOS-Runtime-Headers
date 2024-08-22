// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STRESTRICTIONITEM_H
#define STRESTRICTIONITEM_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface STRestrictionItem : NSObject <NSCopying>



@property (readonly, copy, nonatomic) id *otherInfo; // ivar: _otherInfo
@property (readonly, copy, nonatomic) NSString *payloadKey; // ivar: _payloadKey
@property (readonly, nonatomic) NSUInteger restrictionType; // ivar: _restrictionType
@property (readonly, copy, nonatomic) NSString *rmConfiguration; // ivar: _rmConfiguration
@property (readonly, copy, nonatomic) NSString *uiLabel; // ivar: _uiLabel


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithConfiguration:(id)arg0 restrictionKey:(id)arg1 labelName:(id)arg2 type:(NSUInteger)arg3 restrictionValue:(id)arg4 ;


@end


#endif