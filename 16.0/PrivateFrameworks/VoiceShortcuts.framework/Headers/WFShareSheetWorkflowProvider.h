// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFSHARESHEETWORKFLOWPROVIDER_H
#define WFSHARESHEETWORKFLOWPROVIDER_H

@protocol WFDatabaseProvider;

#import <Foundation/Foundation.h>


@interface WFShareSheetWorkflowProvider : NSObject

@property (readonly, nonatomic) NSObject<WFDatabaseProvider> *databaseProvider; // ivar: _databaseProvider


-(id)generateSingleUseTokenForWorkflowIdentifier:(id)arg0 ;
-(id)initWithDatabaseProvider:(id)arg0 ;
-(id)shareSheetWorkflowsForExtensionMatchingDictionaries:(id)arg0 hostBundleIdentifier:(id)arg1 error:(*id)arg2 ;


@end


#endif