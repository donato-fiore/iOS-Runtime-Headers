// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _DOCNAVIGATIONBUTTONAXIDENTIFIER_H
#define _DOCNAVIGATIONBUTTONAXIDENTIFIER_H

@class NSString;
@protocol DOCNavigationButtonAXIdentifier;

#import <Foundation/Foundation.h>


@interface _DOCNavigationButtonAXIdentifier : NSObject <DOCNavigationButtonAXIdentifier>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)backInHistory;
+(id)commonPrefix;
+(id)forwardInHistory;
+(id)historyMenuPrefix;
+(id)idBase;


@end


#endif