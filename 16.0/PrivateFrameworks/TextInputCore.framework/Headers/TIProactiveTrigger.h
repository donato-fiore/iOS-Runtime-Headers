// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIPROACTIVETRIGGER_H
#define TIPROACTIVETRIGGER_H

@class NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TIProactiveTrigger : NSObject <NSCopying>



@property (readonly, nonatomic) NSDictionary *attributes; // ivar: _attributes
@property (readonly, nonatomic) unsigned char triggerSourceType; // ivar: _triggerSourceType


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSourceType:(unsigned char)arg0 attributes:(id)arg1 ;


@end


#endif