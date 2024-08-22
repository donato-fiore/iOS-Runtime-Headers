// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SPUICONTACTVIEWCONTROLLER_H
#define SPUICONTACTVIEWCONTROLLER_H

@class NSString, NSArray;


#import "SPUIViewController.h"

@interface SPUIContactViewController : SPUIViewController

@property (retain, nonatomic) NSString *contactIdentifier; // ivar: _contactIdentifier
@property (readonly, nonatomic) NSArray *preferredBundleIdentifiers; // ivar: _preferredBundleIdentifiers


-(void)updateWithContactIdentifier:(id)arg0 preferredBundleIdentifiers:(id)arg1 ;
-(void)willUpdateFromResultsWithHighlightedResult:(id)arg0 ;


@end


#endif