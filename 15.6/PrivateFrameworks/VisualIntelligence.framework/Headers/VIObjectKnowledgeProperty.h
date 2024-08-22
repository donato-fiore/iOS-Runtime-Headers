// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VIOBJECTKNOWLEDGEPROPERTY_H
#define VIOBJECTKNOWLEDGEPROPERTY_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface VIObjectKnowledgeProperty : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) NSString *value; // ivar: _value


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithName:(id)arg0 value:(id)arg1 ;


@end


#endif