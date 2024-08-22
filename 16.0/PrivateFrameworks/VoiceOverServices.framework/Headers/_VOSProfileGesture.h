// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _VOSPROFILEGESTURE_H
#define _VOSPROFILEGESTURE_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_VOSProfileCommand.h"
#import "VOSGesture.h"

@interface _VOSProfileGesture : NSObject <NSSecureCoding>



@property (weak, nonatomic) _VOSProfileCommand *command; // ivar: _command
@property (retain, nonatomic) VOSGesture *gesture; // ivar: _gesture


+(BOOL)supportsSecureCoding;
+(id)profileGestureWithGesture:(id)arg0 ;
+(id)profileGestureWithStringValue:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithGesture:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif