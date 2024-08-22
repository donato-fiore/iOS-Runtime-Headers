// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HVSEARCHABLEUSERACTIVITY_H
#define HVSEARCHABLEUSERACTIVITY_H

@class NSString, CSSearchableItem, NSUserActivity;
@protocol BMIdentifiableContentEvent;

#import <Foundation/Foundation.h>


@interface HVSearchableUserActivity : NSObject <BMIdentifiableContentEvent>

 {
    NSString *_persistentIdentifierOrFallback;
}


@property (readonly, nonatomic) CGFloat absoluteTimestamp;
@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) NSString *domainId;
@property (readonly, nonatomic) CSSearchableItem *searchableItem; // ivar: _searchableItem
@property (readonly, nonatomic) NSString *uniqueId;
@property (readonly, nonatomic) NSUserActivity *userActivity; // ivar: _userActivity


+(id)uniqueIdForPersistentIdentifier:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(id)initWithUserActivity:(id)arg0 searchableItem:(id)arg1 ;


@end


#endif