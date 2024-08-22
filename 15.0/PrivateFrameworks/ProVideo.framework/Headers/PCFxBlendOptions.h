// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PCFXBLENDOPTIONS_H
#define PCFXBLENDOPTIONS_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PCFxBlendOptions : NSObject <NSCopying>

 {
    int _mode;
}




-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBlendOptions:(id)arg0 ;
-(int)getBlendMode;
-(void)setBlendMode:(int)arg0 ;


@end


#endif