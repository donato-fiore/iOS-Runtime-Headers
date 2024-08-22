// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSDOCUMENTSPOLICYCONTROLLER_H
#define PSDOCUMENTSPOLICYCONTROLLER_H

@class NSString, DOCSourceSearchingContext, DOCDocumentSource;


#import "PSListController.h"
#import "PSSpecifier.h"

@interface PSDocumentsPolicyController : PSListController

@property (retain, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (retain, nonatomic) PSSpecifier *groupSpecifier; // ivar: _groupSpecifier
@property (nonatomic) BOOL isFirstSourceResults; // ivar: _isFirstSourceResults
@property (retain, nonatomic) DOCSourceSearchingContext *searchingContext; // ivar: _searchingContext
@property (retain, nonatomic) DOCDocumentSource *selectedDocumentSource; // ivar: _selectedDocumentSource


-(id)documentSource;
-(id)specifiers;
-(void)dealloc;
-(void)setDocumentSource:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateFooterAnimated:(BOOL)arg0 ;
-(void)updateRadioGroupWithSources:(id)arg0 animated:(BOOL)arg1 ;


@end


#endif