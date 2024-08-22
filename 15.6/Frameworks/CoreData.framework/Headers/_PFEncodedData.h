// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PFENCODEDDATA_H
#define _PFENCODEDDATA_H

@class NSData;



@interface _PFEncodedData : NSData {
    NSData *_aData;
    unsigned int _byteCount;
    unsigned int _reserved;
}




+(Class)classForKeyedUnarchiver;
-(*void)bytes;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(BOOL)isEqualToData:(id)arg0 ;
-(BOOL)writeToFile:(id)arg0 atomically:(BOOL)arg1 ;
-(BOOL)writeToFile:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)writeToURL:(id)arg0 atomically:(BOOL)arg1 ;
-(BOOL)writeToURL:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(Class)classForCoder;
-(NSUInteger)length;
-(NSUInteger)retainCount;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopy;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)retain;
-(id)subdataWithRange:(struct _NSRange )arg0 ;
-(struct _NSRange )rangeOfData:(id)arg0 options:(NSUInteger)arg1 range:(struct _NSRange )arg2 ;
-(void)getBytes:(*void)arg0 length:(NSUInteger)arg1 ;
-(void)getBytes:(*void)arg0 range:(struct _NSRange )arg1 ;
-(void)release;


@end


#endif