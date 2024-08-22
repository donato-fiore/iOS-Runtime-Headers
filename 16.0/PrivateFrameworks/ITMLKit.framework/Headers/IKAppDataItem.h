// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IKAPPDATAITEM_H
#define IKAPPDATAITEM_H

@class NSDictionary, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "IKAppPrototypeIdentifier.h"

@interface IKAppDataItem : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSDictionary *dataDictionary; // ivar: _dataDictionary
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) IKAppPrototypeIdentifier *prototypeIdentifier; // ivar: _prototypeIdentifier
@property (readonly, nonatomic) NSString *type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithType:(id)arg0 identifier:(id)arg1 prototypeIdentifier:(id)arg2 dataDictionary:(id)arg3 ;
-(id)valueForPropertyPath:(id)arg0 ;


@end


#endif