// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BCSITEM_H
#define BCSITEM_H

@class NSString, NSDate;
@protocol BCSItemIdentifying, BCSExpiring;

#import <Foundation/Foundation.h>


@interface BCSItem : NSObject <BCSItemIdentifying, BCSExpiring>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject *itemIdentifier;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger truncatedHash;
@property (readonly, nonatomic) NSInteger type;


-(BOOL)matchesItemIdentifying:(id)arg0 ;
-(id)init;


@end


#endif