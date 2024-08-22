// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUSTOREPAGEPROTOCOL_H
#define SUSTOREPAGEPROTOCOL_H

@class NSArray, NSString, NSNumber, SSURLRequestProperties;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SUStorePageProtocol : NSObject <NSCopying>



@property (retain, nonatomic) NSArray *allowedOrientations; // ivar: _allowedOrientations
@property (retain, nonatomic) NSString *copyright; // ivar: _copyright
@property (copy, nonatomic) NSArray *expectedClientIdentifiers; // ivar: _expectedClientIdentifiers
@property (retain, nonatomic) NSNumber *focusedItemIdentifier; // ivar: _focusedItemIdentifier
@property (copy, nonatomic) NSArray *navigationButtons; // ivar: _navigationButtons
@property (retain, nonatomic) NSArray *navigationHistoryItems; // ivar: _navigationHistoryItems
@property (copy, nonatomic) NSArray *navigationMenus; // ivar: _navigationMenus
@property (retain, nonatomic) SSURLRequestProperties *overlayBackgroundURLRequestProperties; // ivar: _overlayBackgroundURLRequestProperties
@property (retain, nonatomic) NSString *rootSectionIdentifier; // ivar: _rootSectionIdentifier
@property (nonatomic) BOOL shouldDisplayInOverlay; // ivar: _shouldDisplayInOverlay
@property (nonatomic) BOOL shouldExcludeFromNavigationHistory; // ivar: _shouldExcludeFromNavigationHistory
@property (nonatomic) BOOL shouldReplaceRootViewController; // ivar: _shouldReplaceRootViewController


-(id)_initCommon;
-(id)_newNavigationButtonsFromArray:(id)arg0 ;
-(id)_newNavigationHistoryItemsFromArray:(id)arg0 ;
-(id)_newNavigationMenusFromArray:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)navigationButtonForLocation:(id)arg0 ;
-(id)navigationMenuForLocation:(NSInteger)arg0 ;
-(id)overlayBackgroundURLRequest;
-(void)setOverlayBackgroundURLRequest:(id)arg0 ;
-(void)setValuesFromStorePageDictionary:(id)arg0 ;


@end


#endif