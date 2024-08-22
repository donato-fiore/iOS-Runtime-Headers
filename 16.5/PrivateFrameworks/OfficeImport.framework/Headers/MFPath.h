// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFPATH_H
#define MFPATH_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MFPath : NSObject <NSCopying>





-(BOOL)isOpen;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(int)abort;
-(int)begin;
-(int)closeFigure;
-(int)end;
-(int)fill:(id)arg0 ;
-(int)flatten;
-(int)state;
-(int)stroke:(id)arg0 ;
-(int)widen:(id)arg0 ;
-(struct CGPoint )currentPoint;


@end


#endif