// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASPROTOCOLCAPABILITIES_H
#define ASPROTOCOLCAPABILITIES_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ASProtocolCapabilities : NSObject

@property (retain, nonatomic) NSString *abConstraintsPlistPath; // ivar: _abConstraintsPlistPath
@property (retain, nonatomic) NSString *calConstraintsPlistPath; // ivar: _calConstraintsPlistPath


-(BOOL)serverUpdatesAttendeeStatusOnEvents;
-(BOOL)supportsConversations;
-(BOOL)supportsDraftFolderSync;
-(BOOL)supportsEmailFlagging;
-(BOOL)supportsEnhancedMailboxSearch;
-(BOOL)supportsFreeBusyLookup;
-(BOOL)supportsItemOperationsCommand;
-(BOOL)supportsMailboxSearch;
-(BOOL)supportsNoteSyncing;
-(BOOL)supportsProtocolVersion:(id)arg0 ;
-(BOOL)supportsSettingsCommand;
-(id)addressBookConstraintsPath;
-(id)calendarConstraintsPath;
-(id)initWithProtocolVersionString:(id)arg0 ;


@end


#endif