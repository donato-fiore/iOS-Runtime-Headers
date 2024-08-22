// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFSHORTCUTSV3CUSTOMMODIFICATIONSSTEP_H
#define WFSHORTCUTSV3CUSTOMMODIFICATIONSSTEP_H

@class NSString;
@protocol WFProgressiveMigrationCustomModificationsStep;

#import <Foundation/Foundation.h>


@interface WFShortcutsV3CustomModificationsStep : NSObject <WFProgressiveMigrationCustomModificationsStep>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)performModificationsWithContext:(id)arg0 error:(*id)arg1 ;


@end


#endif