// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSUICELLULARPLANLISTGROUP_H
#define PSUICELLULARPLANLISTGROUP_H

@class Logger, NSString;
@protocol PSSpecifierGroup;

#import <Foundation/Foundation.h>


@interface PSUICellularPlanListGroup : NSObject <PSSpecifierGroup>

 {
    Logger *_logger;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)danglingPlanSpecifierDetailText:(id)arg0 ;
-(id)getLogger;
-(id)initWithListController:(id)arg0 groupSpecifier:(id)arg1 ;
-(id)planSpecifierDetailText:(id)arg0 ;
-(id)specifiers;
-(void)danglingPlanPressed:(id)arg0 ;


@end


#endif