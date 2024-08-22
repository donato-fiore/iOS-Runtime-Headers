// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSUICALLINGSUBGROUP_H
#define PSUICALLINGSUBGROUP_H

@class NSString, PSListController, PSSpecifier, NSArray;
@protocol PSSpecifierGroup;

#import <Foundation/Foundation.h>


@interface PSUICallingSubgroup : NSObject <PSSpecifierGroup>

 {
    BOOL _supportsWiFiCalling;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) PSListController *listController; // ivar: _listController
@property (weak, nonatomic) PSSpecifier *parentSpecifier; // ivar: _parentSpecifier
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *wifiCallingSpecifiers; // ivar: _wifiCallingSpecifiers


-(id)getLogger;
-(id)initWithListController:(id)arg0 groupSpecifier:(id)arg1 ;
-(id)initWithListController:(id)arg0 groupSpecifier:(id)arg1 parentSpecifier:(id)arg2 ;
-(id)specifiers;
-(void)viewWillAppear;


@end


#endif