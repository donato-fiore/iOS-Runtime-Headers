// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFPBCOMMAND_H
#define _SFPBCOMMAND_H

@class PBCodable, NSString, NSData;
@protocol _SFPBCommand, NSSecureCoding;


#import "_SFPBAddToPhotosLibraryCommand.h"
#import "_SFPBBeginMapsRoutingCommand.h"
#import "_SFPBCallCommand.h"
#import "_SFPBCopyCommand.h"
#import "_SFPBEmailCommand.h"
#import "_SFPBIndexedUserActivityCommand.h"
#import "_SFPBInvokeSiriCommand.h"
#import "_SFPBLaunchAppCommand.h"
#import "_SFPBOpenAppClipCommand.h"
#import "_SFPBOpenCalculationCommand.h"
#import "_SFPBOpenCoreSpotlightItemCommand.h"
#import "_SFPBOpenFileProviderItemCommand.h"
#import "_SFPBOpenMediaCommand.h"
#import "_SFPBOpenPunchoutCommand.h"
#import "_SFPBOpenWebClipCommand.h"
#import "_SFPBPerformContactActionCommand.h"
#import "_SFPBPerformContactQueryCommand.h"
#import "_SFPBPerformEntityQueryCommand.h"
#import "_SFPBPerformIntentCommand.h"
#import "_SFPBPerformPersonEntityQueryCommand.h"
#import "_SFPBPlayMediaCommand.h"
#import "_SFPBPlayVideoCommand.h"
#import "_SFPBRequestAppClipInstallCommand.h"
#import "_SFPBRequestUserReportCommand.h"
#import "_SFPBRunVoiceShortcutCommand.h"
#import "_SFPBSearchInAppCommand.h"
#import "_SFPBSearchWebCommand.h"
#import "_SFPBShareCommand.h"
#import "_SFPBShowAppStoreSheetCommand.h"
#import "_SFPBShowContactCardCommand.h"
#import "_SFPBShowPhotosOneUpViewCommand.h"
#import "_SFPBShowPurchaseRequestSheetCommand.h"
#import "_SFPBShowSFCardCommand.h"
#import "_SFPBShowScreenTimeRequestSheetCommand.h"
#import "_SFPBToggleAudioCommand.h"
#import "_SFPBToggleWatchListStatusCommand.h"
#import "_SFPBUpdateSearchQueryCommand.h"

@interface _SFPBCommand : PBCodable <_SFPBCommand, NSSecureCoding>



@property (retain, nonatomic) _SFPBAddToPhotosLibraryCommand *addToPhotosLibraryCommand; // ivar: _addToPhotosLibraryCommand
@property (retain, nonatomic) _SFPBBeginMapsRoutingCommand *beginMapsRoutingCommand; // ivar: _beginMapsRoutingCommand
@property (retain, nonatomic) _SFPBCallCommand *callCommand; // ivar: _callCommand
@property (copy, nonatomic) NSString *commandDetail; // ivar: _commandDetail
@property (retain, nonatomic) _SFPBCopyCommand *copyCommand; // ivar: _copyCommand
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _SFPBEmailCommand *emailCommand; // ivar: _emailCommand
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _SFPBIndexedUserActivityCommand *indexedUserActivityCommand; // ivar: _indexedUserActivityCommand
@property (retain, nonatomic) _SFPBInvokeSiriCommand *invokeSiriCommand; // ivar: _invokeSiriCommand
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) _SFPBLaunchAppCommand *launchAppCommand; // ivar: _launchAppCommand
@property (retain, nonatomic) _SFPBOpenAppClipCommand *openAppClipCommand; // ivar: _openAppClipCommand
@property (retain, nonatomic) _SFPBOpenCalculationCommand *openCalculationCommand; // ivar: _openCalculationCommand
@property (retain, nonatomic) _SFPBOpenCoreSpotlightItemCommand *openCoreSpotlightItemCommand; // ivar: _openCoreSpotlightItemCommand
@property (retain, nonatomic) _SFPBOpenFileProviderItemCommand *openFileProviderItemCommand; // ivar: _openFileProviderItemCommand
@property (retain, nonatomic) _SFPBOpenMediaCommand *openMediaCommand; // ivar: _openMediaCommand
@property (retain, nonatomic) _SFPBOpenPunchoutCommand *openPunchoutCommand; // ivar: _openPunchoutCommand
@property (retain, nonatomic) _SFPBOpenWebClipCommand *openWebClipCommand; // ivar: _openWebClipCommand
@property (retain, nonatomic) _SFPBPerformContactActionCommand *performContactActionCommand; // ivar: _performContactActionCommand
@property (retain, nonatomic) _SFPBPerformContactQueryCommand *performContactQueryCommand; // ivar: _performContactQueryCommand
@property (retain, nonatomic) _SFPBPerformEntityQueryCommand *performEntityQueryCommand; // ivar: _performEntityQueryCommand
@property (retain, nonatomic) _SFPBPerformIntentCommand *performIntentCommand; // ivar: _performIntentCommand
@property (retain, nonatomic) _SFPBPerformPersonEntityQueryCommand *performPersonEntityQueryCommand; // ivar: _performPersonEntityQueryCommand
@property (retain, nonatomic) _SFPBPlayMediaCommand *playMediaCommand; // ivar: _playMediaCommand
@property (retain, nonatomic) _SFPBPlayVideoCommand *playVideoCommand; // ivar: _playVideoCommand
@property (retain, nonatomic) _SFPBRequestAppClipInstallCommand *requestAppClipInstallCommand; // ivar: _requestAppClipInstallCommand
@property (retain, nonatomic) _SFPBRequestUserReportCommand *requestUserReportCommand; // ivar: _requestUserReportCommand
@property (retain, nonatomic) _SFPBRunVoiceShortcutCommand *runVoiceShortcutCommand; // ivar: _runVoiceShortcutCommand
@property (retain, nonatomic) _SFPBSearchInAppCommand *searchInAppCommand; // ivar: _searchInAppCommand
@property (retain, nonatomic) _SFPBSearchWebCommand *searchWebCommand; // ivar: _searchWebCommand
@property (retain, nonatomic) _SFPBShareCommand *shareCommand; // ivar: _shareCommand
@property (retain, nonatomic) _SFPBShowAppStoreSheetCommand *showAppStoreSheetCommand; // ivar: _showAppStoreSheetCommand
@property (retain, nonatomic) _SFPBShowContactCardCommand *showContactCardCommand; // ivar: _showContactCardCommand
@property (retain, nonatomic) _SFPBShowPhotosOneUpViewCommand *showPhotosOneUpViewCommand; // ivar: _showPhotosOneUpViewCommand
@property (retain, nonatomic) _SFPBShowPurchaseRequestSheetCommand *showPurchaseRequestSheetCommand; // ivar: _showPurchaseRequestSheetCommand
@property (retain, nonatomic) _SFPBShowSFCardCommand *showSFCardCommand; // ivar: _showSFCardCommand
@property (retain, nonatomic) _SFPBShowScreenTimeRequestSheetCommand *showScreenTimeRequestSheetCommand; // ivar: _showScreenTimeRequestSheetCommand
@property (readonly) Class superclass;
@property (retain, nonatomic) _SFPBToggleAudioCommand *toggleAudioCommand; // ivar: _toggleAudioCommand
@property (retain, nonatomic) _SFPBToggleWatchListStatusCommand *toggleWatchListStatusCommand; // ivar: _toggleWatchListStatusCommand
@property (retain, nonatomic) _SFPBUpdateSearchQueryCommand *updateSearchQueryCommand; // ivar: _updateSearchQueryCommand
@property (readonly, nonatomic) NSUInteger whichValue; // ivar: _whichValue


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif