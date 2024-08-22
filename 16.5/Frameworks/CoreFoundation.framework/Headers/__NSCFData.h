// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef __NSCFDATA_H
#define __NSCFDATA_H



#import "NSMutableData.h"

@interface __NSCFData : NSMutableData {
    NSUInteger _cfinfoa;
    NSInteger _length;
    NSInteger _capacity;
    *__CFAllocator _bytesDeallocator;
    char * _bytes;
}




+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(*void)bytes;
-(*void)mutableBytes;
-(BOOL)_isDeallocating;
-(BOOL)_providesConcreteBacking;
-(BOOL)_tryRetain;
-(BOOL)isEqual:(id)arg0 ;
-(Class)classForCoder;
-(NSUInteger)hash;
-(NSUInteger)length;
-(NSUInteger)retainCount;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)retain;
-(void)release;
-(void)setLength:(NSUInteger)arg0 ;


@end


#endif