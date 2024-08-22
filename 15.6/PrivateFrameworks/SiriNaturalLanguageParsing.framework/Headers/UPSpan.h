// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UPSPAN_H
#define UPSPAN_H

@class NSString;

#import <Foundation/Foundation.h>


@interface UPSpan : NSObject

@property (readonly, copy) NSString *category; // ivar: _category
@property (readonly) _NSRange range; // ivar: _range
@property (readonly) NSUInteger type; // ivar: _type


+(NSUInteger)_getSpanTypeFromProtobufSpan:(id)arg0 ;
-(id)description;
-(id)initWithProtobufSpan:(id)arg0 error:(*id)arg1 ;
-(id)initWithRange:(struct _NSRange )arg0 type:(NSUInteger)arg1 category:(id)arg2 ;


@end


#endif