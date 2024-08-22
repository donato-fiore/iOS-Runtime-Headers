// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PFEVANESCENTDATA_H
#define _PFEVANESCENTDATA_H

@class NSData, NSURL;



@interface _PFEvanescentData : NSData {
    NSUInteger _length;
    NSURL *_fileURL;
    int _openfd;
    *void _activeMap;
    int _mapRefCount;
}




+(Class)classForKeyedUnarchiver;
-(*void)bytes;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToData:(id)arg0 ;
-(Class)classForCoder;
-(NSUInteger)hash;
-(NSUInteger)length;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithPath:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(id)subdataWithRange:(struct _NSRange )arg0 ;
-(void)dealloc;
-(void)enumerateByteRangesUsingBlock:(id)arg0 ;
-(void)getBytes:(*void)arg0 ;
-(void)getBytes:(*void)arg0 length:(NSUInteger)arg1 ;
-(void)getBytes:(*void)arg0 range:(struct _NSRange )arg1 ;
-(void)invalidate;


@end


#endif