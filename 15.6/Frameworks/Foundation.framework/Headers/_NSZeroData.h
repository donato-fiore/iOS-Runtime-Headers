// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NSZERODATA_H
#define _NSZERODATA_H

@class NSData;



@interface _NSZeroData : NSData



+(id)data;
-(*void)bytes;
-(BOOL)_isCompact;
-(BOOL)_providesConcreteBacking;
-(NSUInteger)length;
-(NSUInteger)retainCount;
-(id)_dispatchData;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBytes:(*void)arg0 length:(NSUInteger)arg1 copy:(BOOL)arg2 deallocator:(id)arg3 ;
-(id)retain;
-(void)release;


@end


#endif