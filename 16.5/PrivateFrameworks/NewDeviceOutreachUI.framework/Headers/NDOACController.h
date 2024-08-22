// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NDOACCONTROLLER_H
#define NDOACCONTROLLER_H

@class PSListController, NSString, NSArray;

#import <Foundation/Foundation.h>

#import "NDOSpecifierDataSource.h"

@interface NDOACController : NSObject

@property BOOL isDefaultDevice; // ivar: _isDefaultDevice
@property (retain, nonatomic) NDOSpecifierDataSource *ndoSpecifierDataSource; // ivar: _ndoSpecifierDataSource
@property (weak, nonatomic) PSListController *parentViewController; // ivar: _parentViewController
@property (retain, nonatomic) NSString *specifierIDToInsertAfter; // ivar: _specifierIDToInsertAfter
@property (readonly) NSArray *specifiers;


+(id)sharedController;
-(id)initWithSerialNumber:(id)arg0 ;
-(void)forceUpdateSpecifiersAndForceUpdateFollowup:(BOOL)arg0 withCompletionHandler:(id)arg1 ;
-(void)updateSpecifiersWithCompletionHandler:(id)arg0 ;


@end


#endif