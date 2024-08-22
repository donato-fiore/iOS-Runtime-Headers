// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DOCUSERINTERFACESTATE_H
#define DOCUSERINTERFACESTATE_H

@class NSNumber, NSMutableDictionary, NSDate, NSData, NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DOCUserInterfaceState : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSNumber *browseTabSelected; // ivar: _browseTabSelected
@property (readonly, nonatomic) NSMutableDictionary *displayModes; // ivar: _displayModes
@property (readonly, nonatomic) NSMutableDictionary *groupingBehaviors; // ivar: _groupingBehaviors
@property (retain, nonatomic) NSDate *lastUpdatedDate; // ivar: _lastUpdatedDate
@property (retain, nonatomic) NSData *mostRecentEffectiveRootLocation; // ivar: _mostRecentEffectiveRootLocation
@property (retain, nonatomic) NSData *mostRecentlyVisitedLocation; // ivar: _mostRecentlyVisitedLocation
@property (retain, nonatomic) NSDictionary *sortingMode; // ivar: _sortingMode
@property (retain, nonatomic) NSNumber *userPrefersTiledSidebarHidden; // ivar: _userPrefersTiledSidebarHidden


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)bumpLastUpdatedDate;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif