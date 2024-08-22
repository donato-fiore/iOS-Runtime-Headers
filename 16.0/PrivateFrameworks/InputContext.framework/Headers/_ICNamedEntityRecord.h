// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _ICNAMEDENTITYRECORD_H
#define _ICNAMEDENTITYRECORD_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _ICNamedEntityRecord : NSObject <NSCopying>



@property (readonly, nonatomic) NSUInteger data; // ivar: _data
@property (readonly, nonatomic) NSString *name; // ivar: _name


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithName:(id)arg0 ;
-(id)initWithName:(id)arg0 data:(NSUInteger)arg1 ;


@end


#endif