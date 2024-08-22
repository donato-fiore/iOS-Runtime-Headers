// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSYTESTINPUT_H
#define PSYTESTINPUT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PSYTestInput : NSObject <NSSecureCoding>



@property (nonatomic) NSInteger action; // ivar: _action


+(BOOL)supportsSecureCoding;
+(id)testInputWithAction:(NSInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif