// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MSPRESENTATIONSTATE_H
#define _MSPRESENTATIONSTATE_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _MSPresentationState : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSUInteger presentationContext; // ivar: _presentationContext
@property (nonatomic) NSUInteger presentationStyle; // ivar: _presentationStyle


+(BOOL)isRunningInCameraContext;
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif