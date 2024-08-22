// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKMONOGRAMCOMPLICATIONDATASOURCE_H
#define NTKMONOGRAMCOMPLICATIONDATASOURCE_H

@class NSString;


#import "NTKComplicationDataSource.h"
#import "NTKMonogramTimelineEntryModel.h"

@interface NTKMonogramComplicationDataSource : NTKComplicationDataSource {
    NTKMonogramTimelineEntryModel *_currentEntry;
    NSString *_monogramText;
    BOOL _listeningForMonogramNotifications;
}




+(BOOL)acceptsComplicationFamily:(NSInteger)arg0 forDevice:(id)arg1 ;
+(BOOL)acceptsComplicationType:(NSUInteger)arg0 forDevice:(id)arg1 ;
-(BOOL)supportsTapAction;
-(Class)richComplicationDisplayViewClassForDevice:(id)arg0 ;
-(id)_currentTimelineEntry;
-(id)currentSwitcherTemplate;
-(id)initWithComplication:(id)arg0 family:(NSInteger)arg1 forDevice:(id)arg2 ;
-(void)_handleMonogramTextReload;
-(void)_reloadMonogramText;
-(void)dealloc;
-(void)getCurrentTimelineEntryWithHandler:(id)arg0 ;
-(void)pause;
-(void)resume;
-(void)startListeningForMonogramNotifications;
-(void)stopListeningForMonogramNotifications;


@end


#endif