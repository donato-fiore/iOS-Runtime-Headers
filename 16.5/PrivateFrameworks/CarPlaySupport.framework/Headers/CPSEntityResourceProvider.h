// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPSENTITYRESOURCEPROVIDER_H
#define CPSENTITYRESOURCEPROVIDER_H

@class NSString, CPTemplate<CPEntityProviding>;
@protocol CPEntityUpdateProviding, CPSEntityActionDelegate, CPEntityClientTemplateDelegate;

#import <Foundation/Foundation.h>

#import "CPSTemplateEnvironment.h"

@interface CPSEntityResourceProvider : NSObject <CPEntityUpdateProviding>



@property (readonly, weak, nonatomic) NSObject<CPSEntityActionDelegate> *actionDelegate; // ivar: _actionDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) CPTemplate<CPEntityProviding> *entityTemplate; // ivar: _entityTemplate
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<CPEntityClientTemplateDelegate> *templateDelegate; // ivar: _templateDelegate
@property (readonly, weak, nonatomic) CPSTemplateEnvironment *templateEnvironment; // ivar: _templateEnvironment


-(id)initWithTemplateEnvironment:(id)arg0 entityTemplate:(id)arg1 templateDelegate:(id)arg2 actionDelegate:(id)arg3 ;
-(void)updateEntityTemplate:(id)arg0 withProxyDelegate:(id)arg1 ;


@end


#endif