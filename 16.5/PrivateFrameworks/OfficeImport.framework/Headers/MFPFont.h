// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFPFONT_H
#define MFPFONT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MFPFont : NSObject {
    float mSize;
    int mUnit;
    unsigned int mFlags;
    NSString *mName;
}




-(float)size;
-(id)name;
-(int)unit;
-(struct __CTFont *)createCTFontWithGraphics:(id)arg0 ;
-(unsigned int)flags;
-(void)setFlags:(unsigned int)arg0 ;
-(void)setName:(id)arg0 ;
-(void)setSize:(float)arg0 ;
-(void)setUnit:(int)arg0 ;


@end


#endif