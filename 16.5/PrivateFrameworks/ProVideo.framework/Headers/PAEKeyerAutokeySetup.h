// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PAEKEYERAUTOKEYSETUP_H
#define PAEKEYERAUTOKEYSETUP_H

@class NSMutableArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PAEKeyerAutokeySetup : NSObject <NSSecureCoding>

 {
    NSMutableArray *_initialSamples;
}




+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initialSamples;
-(id)interpolateBetween:(id)arg0 withWeight:(float)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setInitialSamples:(id)arg0 ;


@end


#endif