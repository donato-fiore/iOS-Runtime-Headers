// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PAEKEYERHISTOGRAM_H
#define PAEKEYERHISTOGRAM_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PAEKeyerHistogram : NSObject <NSSecureCoding>

 {
    *void _histogram;
}




+(BOOL)supportsSecureCoding;
-(*void)getHistogram;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setHistogram:(*void)arg0 ;
-(void)setHistogramArray:(id)arg0 ;


@end


#endif