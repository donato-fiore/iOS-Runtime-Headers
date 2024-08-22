// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RECOMMENDATIONACTIONCONTROLLER_H
#define RECOMMENDATIONACTIONCONTROLLER_H

@class NSString;

#import <Foundation/Foundation.h>

#import "TableViewManager.h"

@interface RecommendationActionController : NSObject

@property (retain, nonatomic) NSString *actionKey; // ivar: actionKey
@property (retain, nonatomic) NSString *sectionIdentifier; // ivar: sectionIdentifier
@property (nonatomic) TableViewManager *tableManager; // ivar: tableManager


+(id)recommendationActionControllerWithTableManager:(id)arg0 andAssistantUIViewController:(id)arg1 ;
-(BOOL)isPrimaryRecommendation;
-(id)getSectionInfoWithLongStrings:(BOOL)arg0 ;
-(void)selectPrimaryRecommendation;


@end


#endif