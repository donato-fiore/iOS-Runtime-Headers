// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFPHONEPATH_H
#define MFPHONEPATH_H



#import "MFPath.h"
#import "OITSUBezierPath.h"

@interface MFPhonePath : MFPath {
    OITSUBezierPath *m_path;
    int m_state;
}




-(BOOL)isOpen;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)getBezierPath;
-(id)init;
-(id)initWithPath:(id)arg0 state:(int)arg1 ;
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
-(void)appendBezierPath:(id)arg0 dc:(id)arg1 ;


@end


#endif