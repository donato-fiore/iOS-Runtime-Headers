// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSMTIEMASK_H
#define TSMTIEMASK_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface TSMTIEMask : NSObject

@property (copy, nonatomic) NSArray *elements; // ivar: _elements
@property (copy, nonatomic) NSString *name; // ivar: _name


+(id)UDPHardwareMask;
+(id)UDPSoftwareMask;
+(id)gPTP1Hop;
+(id)gPTP7Hop;
+(id)gPTPMask1;
+(id)gPTPMask2;
+(id)gPTPMask3;
-(BOOL)mtieConformsToMask:(id)arg0 withErrors:(*id)arg1 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)mtieMaskFromStart:(CGFloat)arg0 toEnd:(CGFloat)arg1 withStep:(CGFloat)arg2 ;


@end


#endif