// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFICON_H
#define WFICON_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFIcon : NSObject <NSSecureCoding>



@property (readonly, nonatomic) BOOL hasClearBackground;


+(BOOL)supportsSecureCoding;
-(id)_init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif