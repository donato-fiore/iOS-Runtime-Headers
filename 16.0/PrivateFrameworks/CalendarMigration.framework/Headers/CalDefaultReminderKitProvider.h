// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALDEFAULTREMINDERKITPROVIDER_H
#define CALDEFAULTREMINDERKITPROVIDER_H

@class NSString;
@protocol CalReminderKitProvider;

#import <Foundation/Foundation.h>


@interface CalDefaultReminderKitProvider : NSObject <CalReminderKitProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)newDatabaseMigrationContext;
-(id)newSaveRequestWithStore:(id)arg0 ;
-(void)setDefaultReminderListIdentifier:(id)arg0 ;


@end


#endif