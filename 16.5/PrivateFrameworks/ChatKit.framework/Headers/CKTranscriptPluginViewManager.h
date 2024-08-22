// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKTRANSCRIPTPLUGINVIEWMANAGER_H
#define CKTRANSCRIPTPLUGINVIEWMANAGER_H

@class IMMultiDict, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface CKTranscriptPluginViewManager : NSObject {
    IMMultiDict *_reusablePluginViewsByClassName;
    NSMutableDictionary *_pluginViewToReuseDelegateMap;
}




+(id)sharedInstance;
-(BOOL)_objectSupportsPluginViewReuse:(id)arg0 ;
-(id)_pointerKeyForPluginView:(id)arg0 ;
-(id)dequeuePluginViewForBalloonController:(id)arg0 ;
-(id)init;
-(void)_registerPluginView:(id)arg0 withReuseDelegate:(id)arg1 ;
-(void)dealloc;
-(void)didReceiveMemoryWarning;
-(void)enqueuePluginViewForReuse:(id)arg0 ;
-(void)resetState;


@end


#endif