// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PDPLACEHOLDER_H
#define PDPLACEHOLDER_H


#import <Foundation/Foundation.h>


@interface PDPlaceholder : NSObject {
    int mType;
    int mOrientation;
    int mSize;
    unsigned int mIndex;
    int mBoundsTrack;
}




+(BOOL)isNonTextType:(int)arg0 ;
+(BOOL)isTextType:(int)arg0 ;
-(id)description;
-(id)init;
-(int)boundsTrack;
-(int)orientation;
-(int)size;
-(int)type;
-(unsigned int)index;
-(void)setBoundsTrack:(int)arg0 ;
-(void)setIndex:(unsigned int)arg0 ;
-(void)setOrientation:(int)arg0 ;
-(void)setSize:(int)arg0 ;
-(void)setType:(int)arg0 ;


@end


#endif