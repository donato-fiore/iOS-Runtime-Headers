// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUCONTROLPANELCLASSRULE_H
#define HUCONTROLPANELCLASSRULE_H

@class NSString, Protocol;
@protocol HUControlPanelRule;

#import <Foundation/Foundation.h>


@interface HUControlPanelClassRule : NSObject <HUControlPanelRule>



@property (copy, nonatomic) Class class; // ivar: _class
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat priority; // ivar: _priority
@property (retain, nonatomic) Protocol *protocol; // ivar: _protocol
@property (readonly) Class superclass;


+(id)ruleWithControlItemClass:(Class)arg0 ;
+(id)ruleWithControlItemProtocol:(id)arg0 ;
-(BOOL)ruleMatchesItem:(id)arg0 ;
-(id)initWithControlItemClass:(Class)arg0 protocol:(id)arg1 ;


@end


#endif