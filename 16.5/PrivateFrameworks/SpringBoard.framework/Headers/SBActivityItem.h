// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBACTIVITYITEM_H
#define SBACTIVITYITEM_H

@class NSString, ACActivityDescriptor;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface SBActivityItem : NSObject <BSDescriptionProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) ACActivityDescriptor *descriptor; // ivar: _descriptor
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) CGFloat relevanceScore; // ivar: _relevanceScore
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 descriptor:(id)arg1 relevanceScore:(CGFloat)arg2 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif