// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PFVMDATA_H
#define _PFVMDATA_H

@class NSData;



@interface _PFVMData : NSData {
    int _cd_rc;
    NSUInteger _length;
    *void _payload;
}




+(Class)classForKeyedUnarchiver;
-(*void)bytes;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(Class)classForCoder;
-(NSUInteger)length;
-(NSUInteger)retainCount;
-(id)initWithBytes:(*void)arg0 length:(NSUInteger)arg1 ;
-(id)initWithContentsOfFile:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)retain;
-(void)dealloc;
-(void)release;


@end


#endif