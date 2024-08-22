// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCQUEUECONTROLLEREDIT_H
#define MPCQUEUECONTROLLEREDIT_H

@class NSMutableDictionary, NSString, NSDictionary;

#import <Foundation/Foundation.h>

#import "MPCQueueController.h"

@interface MPCQueueControllerEdit : NSObject {
    NSMutableDictionary *_suggestedContentItemIDs;
    BOOL _committed;
}


@property (readonly, nonatomic) BOOL allowsChangingCurrentItem; // ivar: _allowsChangingCurrentItem
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *label; // ivar: _label
@property (readonly, nonatomic) MPCQueueController *queueController; // ivar: _queueController
@property (readonly, copy, nonatomic) NSDictionary *suggestedContentItemIDsForDeletedContentItemIDs;
@property (readonly, copy, nonatomic) NSString *suggestedStartingContentItemID; // ivar: _suggestedStartingContentItemID


-(id)description;
-(id)initWithQueueController:(id)arg0 label:(id)arg1 ;
-(void)commit;
-(void)dealloc;
-(void)rollback;
-(void)setSuggestedContentItemID:(id)arg0 forDeletedContentItemID:(id)arg1 ;
-(void)setSuggestedContentItemIDForStart:(id)arg0 ;


@end


#endif