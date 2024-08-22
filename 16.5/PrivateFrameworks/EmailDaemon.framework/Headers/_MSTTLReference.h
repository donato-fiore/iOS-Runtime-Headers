// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MSTTLREFERENCE_H
#define _MSTTLREFERENCE_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface _MSTTLReference : NSObject

@property (retain, nonatomic) NSDate *lastSet; // ivar: _lastSet
@property (nonatomic) CGFloat ttl; // ivar: _ttl
@property (retain, nonatomic) id *value; // ivar: _value


-(id)getValueWithGenerator:(id)arg0 ;
-(id)initWithTTL:(CGFloat)arg0 ;


@end


#endif