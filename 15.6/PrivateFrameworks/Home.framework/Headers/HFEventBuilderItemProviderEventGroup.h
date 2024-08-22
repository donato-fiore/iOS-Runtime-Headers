// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFEVENTBUILDERITEMPROVIDEREVENTGROUP_H
#define HFEVENTBUILDERITEMPROVIDEREVENTGROUP_H

@class NSString, NSSet;

#import <Foundation/Foundation.h>


@interface HFEventBuilderItemProviderEventGroup : NSObject

@property (retain, nonatomic) NSString *comparisonKey; // ivar: _comparisonKey
@property (retain, nonatomic) NSSet *eventBuilders; // ivar: _eventBuilders


+(id)eventGroupWithBuilders:(id)arg0 ;
-(id)initWithEventBuilders:(id)arg0 ;


@end


#endif