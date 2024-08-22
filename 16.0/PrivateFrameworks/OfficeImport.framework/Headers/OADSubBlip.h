// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OADSUBBLIP_H
#define OADSUBBLIP_H

@class NSData;


#import "OCDDelayedMedia.h"

@interface OADSubBlip : OCDDelayedMedia {
    int mType;
    NSData *mData;
    CGSize mSizeInPoints;
    int mSizeInBytes;
    CGRect mFrame;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isLoaded;
-(NSUInteger)hash;
-(id)data;
-(id)initWithData:(id)arg0 type:(int)arg1 ;
-(int)sizeInBytes;
-(int)type;
-(struct CGRect )frame;
-(struct CGSize )sizeInPoints;
-(void)setData:(id)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setSizeInBytes:(int)arg0 ;
-(void)setSizeInPoints:(struct CGSize )arg0 ;
-(void)setType:(int)arg0 ;


@end


#endif