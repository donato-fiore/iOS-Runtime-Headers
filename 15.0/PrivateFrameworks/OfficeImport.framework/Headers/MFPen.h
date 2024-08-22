// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFPEN_H
#define MFPEN_H

@protocol MFObject;

#import <Foundation/Foundation.h>

#import "OITSUColor.h"

@interface MFPen : NSObject <MFObject>

 {
    int m_penStyle;
    int m_penWidth;
    OITSUColor *m_colour;
    *CGFloat m_userStyleArray;
}




+(id)pen;
+(id)penWithStyle:(int)arg0 width:(int)arg1 colour:(id)arg2 styleArray:(*CGFloat)arg3 ;
-(id)getColor;
-(id)init;
-(id)initWithStyle:(int)arg0 width:(int)arg1 colour:(id)arg2 styleArray:(*CGFloat)arg3 ;
-(int)getStyle;
-(int)getWidth;
-(int)selectInto:(id)arg0 ;


@end


#endif