// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SBSUSERNOTIFICATIONBUTTONDEFINITIONBUILDER_H
#define _SBSUSERNOTIFICATIONBUTTONDEFINITIONBUILDER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface _SBSUserNotificationButtonDefinitionBuilder : NSObject {
    NSMutableArray *_definitions;
}




-(id)build;
-(id)init;
-(void)addButtonDefinitionWithTitle:(id)arg0 withConfiguration:(id)arg1 ;


@end


#endif