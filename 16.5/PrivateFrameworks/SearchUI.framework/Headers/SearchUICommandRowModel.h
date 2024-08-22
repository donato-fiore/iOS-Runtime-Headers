// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEARCHUICOMMANDROWMODEL_H
#define SEARCHUICOMMANDROWMODEL_H

@class NSString, TLKRichText;


#import "SearchUICardSectionRowModel.h"

@interface SearchUICommandRowModel : SearchUICardSectionRowModel {
    NSString *_sportsCanonicalID;
    TLKRichText *_title;
    TLKRichText *_toggledTitle;
    TLKRichText *_subtitle;
    BOOL _toggled;
}


@property (readonly) TLKRichText *subtitle;
@property (readonly) TLKRichText *title;
@property (readonly) BOOL toggled;


-(BOOL)commandSupported;
-(NSUInteger)subscriptionType;
-(id)initWithResult:(id)arg0 cardSection:(id)arg1 isInline:(BOOL)arg2 queryId:(NSUInteger)arg3 ;
-(void)checkIfCommandIsValidWithCompletionHandler:(id)arg0 ;
-(void)getSubscriptionStatus:(id)arg0 ;
-(void)safelyUpdateView:(id)arg0 ;
-(void)toggleStateWithDetailedSectionView:(id)arg0 ;
-(void)updateStateWithCommandCardSectionView:(id)arg0 ;


@end


#endif