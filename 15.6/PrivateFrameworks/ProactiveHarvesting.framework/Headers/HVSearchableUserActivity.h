// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HVSEARCHABLEUSERACTIVITY_H
#define HVSEARCHABLEUSERACTIVITY_H

@class NSString, CSSearchableItem, NSUserActivity;
@protocol BMIdentifiableContentEvent;

#import <Foundation/Foundation.h>


@interface HVSearchableUserActivity : NSObject <BMIdentifiableContentEvent>



@property (readonly, nonatomic) CGFloat absoluteTimestamp;
@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) NSString *domainId;
@property (readonly, nonatomic) CSSearchableItem *searchableItem; // ivar: _searchableItem
@property (readonly, nonatomic) NSString *uniqueId; // ivar: _uniqueId
@property (readonly, nonatomic) NSUserActivity *userActivity; // ivar: _userActivity


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(id)initWithUserActivity:(id)arg0 uniqueId:(id)arg1 searchableItem:(id)arg2 ;


@end


#endif