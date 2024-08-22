// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFDATA_H
#define MFDATA_H

@class NSData, NSString;
@protocol NSCopying, NSMutableCopying;



@interface MFData : NSData <NSCopying, NSMutableCopying>

 {
    NSData *_internal;
    NSString *_path;
    NSData *_parent;
    BOOL _subdata;
}




+(void)setDefaultMappingThresholdInBytes:(NSUInteger)arg0 ;
-(*void)bytes;
-(BOOL)mf_immutable;
-(BOOL)writeToFile:(id)arg0 atomically:(BOOL)arg1 ;
-(BOOL)writeToFile:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)writeToURL:(id)arg0 atomically:(BOOL)arg1 ;
-(BOOL)writeToURL:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(NSUInteger)length;
-(id)_initWithData:(id)arg0 maybeMutable:(BOOL)arg1 ;
-(id)_initWithFile:(id)arg0 ;
-(id)_initWithRange:(struct _NSRange )arg0 from:(id)arg1 retainingParent:(BOOL)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)data;
-(id)init;
-(id)initWithBytes:(*void)arg0 length:(NSUInteger)arg1 ;
-(id)initWithBytesNoCopy:(*void)arg0 length:(NSUInteger)arg1 ;
-(id)initWithBytesNoCopy:(*void)arg0 length:(NSUInteger)arg1 freeWhenDone:(BOOL)arg2 ;
-(id)initWithContentsOfFile:(id)arg0 ;
-(id)initWithContentsOfFile:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)initWithContentsOfURL:(id)arg0 ;
-(id)initWithContentsOfURL:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithImmutableData:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)subdataWithRange:(struct _NSRange )arg0 ;
-(void)dealloc;


@end


#endif