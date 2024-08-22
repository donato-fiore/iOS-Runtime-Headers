// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CUISUBRANGEDATA_H
#define _CUISUBRANGEDATA_H

@class NSData;



@interface _CUISubrangeData : NSData {
    _NSRange _range;
    NSData *_data;
}




-(*void)bytes;
-(NSUInteger)length;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithData:(id)arg0 range:(struct _NSRange )arg1 ;
-(void)dealloc;


@end


#endif