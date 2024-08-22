// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MFNSSHADOW_H
#define _MFNSSHADOW_H

@class NSShadow;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _MFNSShadow : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSShadow *shadow; // ivar: _shadow


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithShadow:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif