// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKCONFIGURABLEPASSDETAILSECTIONSCONTROLLER_H
#define PKCONFIGURABLEPASSDETAILSECTIONSCONTROLLER_H

@class NSDictionary, NSArray, NSString;
@protocol PKTableViewSectionController, PKConfigurablePassDetailSectionsControllerDelegate;

#import <Foundation/Foundation.h>


@interface PKConfigurablePassDetailSectionsController : NSObject <PKTableViewSectionController>

 {
    NSDictionary *_sectionMap;
    NSDictionary *_fieldMap;
}


@property (readonly, nonatomic) NSArray *activePassDetailSections;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKConfigurablePassDetailSectionsControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *sectionIdentifiers; // ivar: _sectionIdentifiers
@property (readonly) Class superclass;
@property (nonatomic) BOOL useBridgeStyle; // ivar: _useBridgeStyle


-(BOOL)hasArbitraryInfoField:(id)arg0 ;
-(BOOL)shouldHighlightRowAtIndexPath:(id)arg0 sectionIdentifier:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSectionIdentifier:(id)arg1 ;
-(id)_initWithPaymentPass:(id)arg0 visibleSectionIdentifiers:(id)arg1 renderUnclaimedFields:(BOOL)arg2 ;
-(id)init;
-(id)initWithPaymentPass:(id)arg0 ;
-(id)initWithPaymentPass:(id)arg0 forSelectSections:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 sectionIdentifier:(id)arg2 ;
-(id)titleForFooterInSectionIdentifier:(id)arg0 ;
-(id)titleForHeaderInSectionIdentifier:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 sectionIdentifier:(id)arg2 ;


@end


#endif