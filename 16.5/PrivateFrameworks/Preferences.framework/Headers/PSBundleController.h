// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSBUNDLECONTROLLER_H
#define PSBUNDLECONTROLLER_H


#import <Foundation/Foundation.h>

#import "PSListController.h"

@interface PSBundleController : NSObject {
    PSListController *_parent;
}




-(id)init;
-(id)initWithParentListController:(id)arg0 ;
-(id)initWithParentListController:(id)arg0 properties:(id)arg1 ;
-(id)specifiersWithSpecifier:(id)arg0 ;
-(void)load;
-(void)unload;


@end


#endif