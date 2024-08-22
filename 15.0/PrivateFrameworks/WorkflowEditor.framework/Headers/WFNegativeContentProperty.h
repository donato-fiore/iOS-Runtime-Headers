// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFNEGATIVECONTENTPROPERTY_H
#define WFNEGATIVECONTENTPROPERTY_H

@class WFContentProperty;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface WFNegativeContentProperty : NSObject <NSCopying>



@property (readonly, copy, nonatomic) WFContentProperty *property; // ivar: _property


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithProperty:(id)arg0 ;


@end


#endif