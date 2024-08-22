// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFMODULESUMMARYBASEDPARAMETERCOMPONENTSTATEWRITER_H
#define WFMODULESUMMARYBASEDPARAMETERCOMPONENTSTATEWRITER_H

@protocol WFModuleParameterStateWriter;

#import <Foundation/Foundation.h>


@interface WFModuleSummaryBasedParameterComponentStateWriter : NSObject <WFModuleParameterStateWriter>



@property (readonly, nonatomic) id *updateBlock; // ivar: _updateBlock


-(BOOL)setState:(id)arg0 ofParameter:(id)arg1 ;
-(id)initWithUpdateBlock:(id)arg0 ;


@end


#endif