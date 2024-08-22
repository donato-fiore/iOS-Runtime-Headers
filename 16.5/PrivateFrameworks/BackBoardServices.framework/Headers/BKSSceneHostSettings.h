// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BKSSCENEHOSTSETTINGS_H
#define BKSSCENEHOSTSETTINGS_H

@class NSString;
@protocol BSDescriptionStreamable, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BKSSceneHostSettings : NSObject <BSDescriptionStreamable, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger touchBehavior; // ivar: _touchBehavior


+(BOOL)supportsSecureCoding;
+(id)new;
-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 touchBehavior:(NSInteger)arg1 ;
-(void)appendDescriptionToFormatter:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif