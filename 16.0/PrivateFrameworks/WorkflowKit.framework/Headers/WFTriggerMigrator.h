// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFTRIGGERMIGRATOR_H
#define WFTRIGGERMIGRATOR_H

@class NSString;
@protocol NSKeyedUnarchiverDelegate;

#import <Foundation/Foundation.h>


@interface WFTriggerMigrator : NSObject <NSKeyedUnarchiverDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)migrateTriggerUponUnarchival:(id)arg0 ;
+(id)migrateUserFocusActivityTriggerFromUniqueIdentifierToSemanticIdentifier:(id)arg0 ;
+(id)migratedUserFocusActivityTriggerFromLegacyDNDTrigger:(id)arg0 ;
-(id)unarchiver:(id)arg0 didDecodeObject:(id)arg1 ;


@end


#endif