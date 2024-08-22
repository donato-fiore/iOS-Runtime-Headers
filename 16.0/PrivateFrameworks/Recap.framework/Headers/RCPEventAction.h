// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RCPEVENTACTION_H
#define RCPEVENTACTION_H

@protocol NSCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface RCPEventAction : NSObject <NSCoding, NSCopying>





+(id)actionToSetPointerAbsoluteLocation:(struct CGPoint )arg0 environment:(id)arg1 ;
+(id)actionToSetPointerCurrentAbsoluteLocation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)play;


@end


#endif