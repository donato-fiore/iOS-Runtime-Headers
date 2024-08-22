// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UPSPAN_H
#define UPSPAN_H

@class NSString, SIRINLUEXTERNALUsoGraph;

#import <Foundation/Foundation.h>


@interface UPSpan : NSObject

@property (readonly, copy) NSString *category; // ivar: _category
@property (readonly) _NSRange range; // ivar: _range
@property (readonly, nonatomic) SIRINLUEXTERNALUsoGraph *sharedEntityGraph; // ivar: _sharedEntityGraph
@property (readonly) NSUInteger type; // ivar: _type


+(NSUInteger)_getSpanTypeFromProtobufSpan:(id)arg0 ;
-(id)description;
-(id)initWithProtobufSpan:(id)arg0 nonWhitespaceTokenIndexes:(id)arg1 error:(*id)arg2 ;
-(id)initWithRange:(struct _NSRange )arg0 type:(NSUInteger)arg1 category:(id)arg2 ;
-(id)initWithRange:(struct _NSRange )arg0 type:(NSUInteger)arg1 category:(id)arg2 sharedEntityGraph:(id)arg3 ;


@end


#endif