// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUITCCACCESSCONTROLLER_H
#define PUITCCACCESSCONTROLLER_H

@class PSListController, NSString, NSArray;



@interface PUITCCAccessController : PSListController

@property (retain, nonatomic) NSString *appGroupHeader; // ivar: _appGroupHeader
@property (retain, nonatomic) NSArray *appSpecifiers; // ivar: _appSpecifiers
@property (nonatomic) NSUInteger appType; // ivar: _appType
@property (copy, nonatomic) NSString *clipsFooter; // ivar: _clipsFooter
@property (copy, nonatomic) NSString *explanation; // ivar: _explanation
@property (copy, nonatomic) NSString *footer; // ivar: _footer
@property (copy, nonatomic) NSString *header; // ivar: _header
@property (readonly, nonatomic) NSString *serviceKey; // ivar: _serviceKey
@property (nonatomic) BOOL supportsClips; // ivar: _supportsClips


+(BOOL)isServiceRestricted:(id)arg0 ;
-(id)accesssForSpecifier:(id)arg0 ;
-(id)init;
-(id)specifiers;
-(void)setAccess:(id)arg0 forSpecifier:(id)arg1 ;
-(void)setSpecifier:(id)arg0 ;
-(void)updateSpecifiersForImposedSettings;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif