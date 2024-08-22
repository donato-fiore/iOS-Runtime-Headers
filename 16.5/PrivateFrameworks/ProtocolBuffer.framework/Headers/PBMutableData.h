// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBMUTABLEDATA_H
#define PBMUTABLEDATA_H

@class NSMutableData;



@interface PBMutableData : NSMutableData {
    char * p;
    char * buffer;
    char * end;
}




-(*void)bytes;
-(*void)mutableBytes;
-(NSUInteger)length;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)setLength:(NSUInteger)arg0 ;


@end


#endif