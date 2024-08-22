// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NSINLINEDATA_H
#define _NSINLINEDATA_H

@class NSData;



@interface _NSInlineData : NSData {
    unsigned short _length;
}




+(id)_allocWithExtraBytes:(NSUInteger)arg0 ;
-(*void)bytes;
-(BOOL)_isCompact;
-(BOOL)_providesConcreteBacking;
-(NSUInteger)length;
-(id)_createDispatchData;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBytes:(*void)arg0 length:(NSUInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;


@end


#endif