// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASDPROPERTYADDRESS_H
#define ASDPROPERTYADDRESS_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface ASDPropertyAddress : NSObject <NSCopying>



@property (readonly, nonatomic) AudioObjectPropertyAddress audioObjectPropertyAddress; // ivar: _audioObjectPropertyAddress
@property (readonly, nonatomic) unsigned int element;
@property (readonly, nonatomic) unsigned int scope;
@property (readonly, nonatomic) unsigned int selector;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAddress:(struct AudioObjectPropertyAddress )arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithSelector:(unsigned int)arg0 scope:(unsigned int)arg1 element:(unsigned int)arg2 ;


@end


#endif