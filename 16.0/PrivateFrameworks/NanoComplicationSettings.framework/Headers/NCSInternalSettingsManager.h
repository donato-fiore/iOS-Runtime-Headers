// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NCSINTERNALSETTINGSMANAGER_H
#define NCSINTERNALSETTINGSMANAGER_H

@class NSMutableArray, NPSManager, NSArray, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NCSInternalSettingsManager : NSObject {
    NSMutableArray *_complicationDefinitions;
    NPSManager *_syncManager;
    NSArray *_storedSettings;
    NSString *_selectedComplicationIdentifier;
}


@property (readonly, nonatomic) BOOL hasSettings;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (copy, nonatomic) NSString *selectedComplicationIdentifier;


-(NSUInteger)_numberOfActiveComplications;
-(id)_localizedNameForComplication:(id)arg0 ;
-(id)complicationDefinitionForAppBundleIdentifier:(id)arg0 ;
-(id)complicationDefinitionForComplicationIdentifier:(id)arg0 ;
-(id)complicationDefinitionForWatchKitIdentifier:(id)arg0 ;
-(id)complicationIdentifierForComplicationDefinitionAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(void)_saveSettings;
-(void)addComplicationDefinition:(id)arg0 ;
-(void)enumerateAllComplicationDefinitionsUsingBlock:(id)arg0 ;
-(void)enumerateComplicationDefinitionsUsingBlock:(id)arg0 ;
-(void)loadSettings;
-(void)moveComplicationDefinitionFromIndex:(NSUInteger)arg0 toIndex:(NSUInteger)arg1 ;
-(void)removeComplicationDefinitionsInArray:(id)arg0 ;
-(void)saveSettings;


@end


#endif