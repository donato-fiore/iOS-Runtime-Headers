// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFCONTROLPANELITEMSINGLECONTROLRULE_H
#define HFCONTROLPANELITEMSINGLECONTROLRULE_H

@class NSString;
@protocol HFControlPanelItemRule;

#import <Foundation/Foundation.h>


@interface HFControlPanelItemSingleControlRule : NSObject <HFControlPanelItemRule>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) id *displayResultsGenerator; // ivar: _displayResultsGenerator
@property (readonly, copy, nonatomic) id *filter; // ivar: _filter
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)controlPanelItemForControlItems:(id)arg0 ;
// -(id)initWithFilter:(id)arg0 displayResultsGenerator:(unk)arg1  ;


@end


#endif