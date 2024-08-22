// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PADATABASEMANAGER_H
#define PADATABASEMANAGER_H

@class HCDatabaseManager;



@interface PADatabaseManager : HCDatabaseManager



+(id)sharedManager;
-(BOOL)saveConfiguration:(id)arg0 ;
-(id)cloudKitContainer;
-(id)containerIdentifier;
-(id)currentConfiguration;
-(id)managedObjectModelName;
-(void)contentDidUpdate:(id)arg0 ;
-(void)logMessage:(id)arg0 ;


@end


#endif