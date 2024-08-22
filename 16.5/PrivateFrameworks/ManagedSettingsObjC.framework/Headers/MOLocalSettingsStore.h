// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MOLOCALSETTINGSSTORE_H
#define MOLOCALSETTINGSSTORE_H

@class NSString, NSUUID, NSXPCConnection;
@protocol MOSettingsReader, MOSettingsWriter;


#import "MOSettingsStore.h"

@interface MOLocalSettingsStore : MOSettingsStore <MOSettingsReader, MOSettingsWriter>



@property (retain, nonatomic) NSString *container; // ivar: _container
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSUUID *persistenceRecordIdentifier; // ivar: _persistenceRecordIdentifier
@property (readonly, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


+(id)new;
-(id)init;
-(id)initWithName:(id)arg0 ;
-(id)initWithName:(id)arg0 sharedContainer:(id)arg1 ;
-(id)initWithSharedContainer:(id)arg0 ;
-(id)reader;
-(id)valueForSetting:(id)arg0 inGroup:(id)arg1 ;
-(id)writer;
-(void)clearAllSettings;
-(void)removeValueForSetting:(id)arg0 inGroup:(id)arg1 ;
-(void)setValue:(id)arg0 forSetting:(id)arg1 inGroup:(id)arg2 ;


@end


#endif