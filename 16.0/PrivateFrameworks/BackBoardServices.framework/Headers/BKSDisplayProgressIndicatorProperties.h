// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BKSDISPLAYPROGRESSINDICATORPROPERTIES_H
#define BKSDISPLAYPROGRESSINDICATORPROPERTIES_H

@class NSString;
@protocol NSSecureCoding, BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface BKSDisplayProgressIndicatorProperties : NSObject <NSSecureCoding, BSDescriptionProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGPoint position; // ivar: _position
@property (readonly, nonatomic) NSInteger style; // ivar: _style
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)progressIndicatorWithStyle:(NSInteger)arg0 position:(struct CGPoint )arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithStyle:(NSInteger)arg0 position:(struct CGPoint )arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif