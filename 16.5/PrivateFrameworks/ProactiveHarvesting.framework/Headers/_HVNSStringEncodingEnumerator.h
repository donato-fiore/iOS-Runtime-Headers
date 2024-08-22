// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HVNSSTRINGENCODINGENUMERATOR_H
#define _HVNSSTRINGENCODINGENUMERATOR_H

@class NSEnumerator, NSString;
@protocol NSFastEnumeration;



@interface _HVNSStringEncodingEnumerator : NSEnumerator <NSFastEnumeration>

 {
    NSString *_string;
    NSUInteger _encoding;
    _NSRange _remaining;
    BOOL _needsBOM;
    BOOL _needsNullTermination;
}




-(id)init;
-(id)initWithString:(id)arg0 encoding:(NSUInteger)arg1 nullTerminated:(BOOL)arg2 ;
-(id)nextObject;
-(id)nullTerminationIfNeeded;


@end


#endif