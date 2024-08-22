// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKCOMPANIONREMOTECOMPLICATIONDATASOURCE_H
#define NTKCOMPANIONREMOTECOMPLICATIONDATASOURCE_H

@class CLKComplicationTemplate, NSString;
@protocol NTKComplicationCollectionObserver, NTKCompanionAppLibraryObserver;


#import "NTKComplicationDataSource.h"
#import "NTKComplicationCollection.h"
#import "NTKSampleComplicationDataSource.h"
#import "NTKCompanionAppLibrary.h"

@interface NTKCompanionRemoteComplicationDataSource : NTKComplicationDataSource <NTKComplicationCollectionObserver, NTKCompanionAppLibraryObserver>

 {
    CLKComplicationTemplate *_complicationTemplate;
    NTKComplicationCollection *_complicationCollection;
    NTKSampleComplicationDataSource *_stocksDataSource;
    NTKCompanionAppLibrary *_appLibrary;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)acceptsComplicationType:(NSUInteger)arg0 withFamily:(NSInteger)arg1 forDevice:(id)arg2 ;
-(BOOL)_remoteIsCompanion;
-(id)_templateFromApp:(id)arg0 ;
-(id)currentSwitcherTemplate;
-(id)initWithComplication:(id)arg0 family:(NSInteger)arg1 forDevice:(id)arg2 ;
-(void)_activeDeviceChanged;
-(void)_invalidate;
-(void)_invalidateIfComplicationCorrespondsToApp:(id)arg0 ;
-(void)_loadCollection;
-(void)appLibrary:(id)arg0 didAddApp:(id)arg1 ;
-(void)appLibrary:(id)arg0 didUpdateApp:(id)arg1 ;
-(void)complicationCollection:(id)arg0 didRemoveSampleTemplatesForClient:(id)arg1 ;
-(void)complicationCollection:(id)arg0 didUpdateSampleTemplateForClient:(id)arg1 ;
-(void)complicationCollectionDidLoad:(id)arg0 ;
-(void)dealloc;


@end


#endif