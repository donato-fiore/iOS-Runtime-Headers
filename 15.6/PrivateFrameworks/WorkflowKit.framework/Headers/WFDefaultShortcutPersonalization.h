// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFDEFAULTSHORTCUTPERSONALIZATION_H
#define WFDEFAULTSHORTCUTPERSONALIZATION_H


#import <Foundation/Foundation.h>

#import "WFDefaultShortcutPersonalizationContext.h"

@interface WFDefaultShortcutPersonalization : NSObject

@property (readonly, nonatomic) WFDefaultShortcutPersonalizationContext *context; // ivar: _context


-(id)initWithContext:(id)arg0 ;
-(void)generateDefaultShortcutsWithCompletionHandler:(id)arg0 ;
-(void)personalizeDefaultShortcuts:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif