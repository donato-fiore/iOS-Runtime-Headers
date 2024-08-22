// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFDEFAULTSHORTCUTPERSONALIZATIONRESULT_H
#define WFDEFAULTSHORTCUTPERSONALIZATIONRESULT_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface WFDefaultShortcutPersonalizationResult : NSObject

@property (readonly, nonatomic) NSArray *personalizedDefaultShortcuts; // ivar: _personalizedDefaultShortcuts


-(id)description;
-(id)initWithPersonalizedDefaultShortcuts:(id)arg0 ;
-(void)enumerateWorkflowRecordsWithBlock:(id)arg0 ;


@end


#endif