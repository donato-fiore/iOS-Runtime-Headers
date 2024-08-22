// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASDPROPERTY_H
#define ASDPROPERTY_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "ASDPropertyAddress.h"

@interface ASDProperty : NSObject <NSCopying>



@property (readonly, nonatomic) ASDPropertyAddress *address; // ivar: _address
@property (retain, nonatomic) id *value; // ivar: _value


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAddress:(id)arg0 value:(id)arg1 ;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif