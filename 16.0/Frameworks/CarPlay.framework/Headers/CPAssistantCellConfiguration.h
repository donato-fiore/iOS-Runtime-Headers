// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPASSISTANTCELLCONFIGURATION_H
#define CPASSISTANTCELLCONFIGURATION_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CPAssistantCellConfiguration : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSInteger assistantAction; // ivar: _assistantAction
@property (readonly, nonatomic) NSInteger position; // ivar: _position
@property (readonly, nonatomic) NSInteger visibility; // ivar: _visibility


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToConfiguration:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPosition:(NSInteger)arg0 visibility:(NSInteger)arg1 assistantAction:(NSInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif