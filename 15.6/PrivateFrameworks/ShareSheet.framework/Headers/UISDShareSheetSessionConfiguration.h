// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UISDSHARESHEETSESSIONCONFIGURATION_H
#define UISDSHARESHEETSESSIONCONFIGURATION_H

@class NSArray, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface UISDShareSheetSessionConfiguration : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSArray *actionProxies; // ivar: _actionProxies
@property (retain, nonatomic) NSNumber *nearbyCountBadge; // ivar: _nearbyCountBadge
@property (retain, nonatomic) NSNumber *nearbyCountSlotID; // ivar: _nearbyCountSlotID
@property (retain, nonatomic) NSArray *peopleProxies; // ivar: _peopleProxies
@property (copy, nonatomic) NSArray *peopleSuggestions; // ivar: _peopleSuggestions
@property (nonatomic) BOOL reloadData; // ivar: _reloadData
@property (copy, nonatomic) NSArray *restrictedActivityTypes; // ivar: _restrictedActivityTypes
@property (retain, nonatomic) NSArray *shareProxies; // ivar: _shareProxies
@property (nonatomic) BOOL wantsAnimation; // ivar: _wantsAnimation


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif