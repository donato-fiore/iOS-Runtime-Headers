// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NSBPLISTMAPPEDDATA_H
#define _NSBPLISTMAPPEDDATA_H

@class NSData;



@interface _NSBPlistMappedData : NSData {
    *void ptr;
    NSUInteger size;
    NSUInteger mappingIndex;
    ? bplistTrailer;
    NSUInteger bplistOffset;
    unsigned char bplistMarker;
}




-(*void)bytes;
-(BOOL)_getBPlistMarker:(char *)arg0 offset:(*NSUInteger)arg1 trailer:(struct ? *)arg2 ;
-(NSInteger)mappingIndex;
-(NSUInteger)_bplistObjectsRangeEnd;
-(NSUInteger)length;
-(id)initWithBinaryPlistData:(*void)arg0 size:(NSUInteger)arg1 trailer:(struct ? )arg2 offset:(NSUInteger)arg3 marker:(unsigned char)arg4 ;
-(id)initWithFileURL:(id)arg0 error:(*id)arg1 ;
-(void)setMappingIndex:(NSInteger)arg0 ;


@end


#endif