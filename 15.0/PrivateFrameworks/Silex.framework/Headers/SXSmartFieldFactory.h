// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXSMARTFIELDFACTORY_H
#define SXSMARTFIELDFACTORY_H

@class NSString;
@protocol SXSmartFieldFactory, SXActionProvider, SXActionSerializer;

#import <Foundation/Foundation.h>


@interface SXSmartFieldFactory : NSObject <SXSmartFieldFactory>



@property (readonly, nonatomic) NSObject<SXActionProvider> *actionProvider; // ivar: _actionProvider
@property (readonly, nonatomic) NSObject<SXActionSerializer> *actionSerializer; // ivar: _actionSerializer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithActionProvider:(id)arg0 actionSerializer:(id)arg1 ;
-(id)smartFieldForAddition:(id)arg0 withContext:(id)arg1 ;


@end


#endif