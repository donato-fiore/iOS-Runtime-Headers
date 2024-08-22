// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSSUBRANGEDATA_H
#define NSSUBRANGEDATA_H

@class NSData;



@interface NSSubrangeData : NSData {
    _NSRange _range;
    NSData *_data;
}




-(*void)bytes;
-(BOOL)_isCompact;
-(NSUInteger)length;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 range:(struct _NSRange )arg1 ;
-(void)dealloc;
-(void)getBytes:(*void)arg0 ;
-(void)getBytes:(*void)arg0 length:(NSUInteger)arg1 ;
-(void)getBytes:(*void)arg0 range:(struct _NSRange )arg1 ;


@end


#endif