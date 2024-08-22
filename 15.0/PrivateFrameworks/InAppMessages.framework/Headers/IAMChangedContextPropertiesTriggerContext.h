// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IAMCHANGEDCONTEXTPROPERTIESTRIGGERCONTEXT_H
#define IAMCHANGEDCONTEXTPROPERTIESTRIGGERCONTEXT_H

@class NSString, NSSet;
@protocol IAMTriggerContext;

#import <Foundation/Foundation.h>


@interface IAMChangedContextPropertiesTriggerContext : NSObject <IAMTriggerContext>



@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) NSSet *contextPropertyNames; // ivar: _contextPropertyNames
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)satisfiesPresentationTrigger:(id)arg0 ;
-(id)initWithContextPropertyNames:(id)arg0 bundleIdentifier:(id)arg1 ;


@end


#endif