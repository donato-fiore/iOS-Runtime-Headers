// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSUIPLANPENDINGTRANSFERLISTGROUP_H
#define PSUIPLANPENDINGTRANSFERLISTGROUP_H

@class NSString;
@protocol PSSpecifierGroup;

#import <Foundation/Foundation.h>


@interface PSUIPlanPendingTransferListGroup : NSObject <PSSpecifierGroup>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithListController:(id)arg0 groupSpecifier:(id)arg1 ;
-(id)specifiers;


@end


#endif