// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UASHAREDPASTEBOARD_H
#define UASHAREDPASTEBOARD_H


#import <Foundation/Foundation.h>

#import "UASharedPasteboardManager.h"

@interface UASharedPasteboard : NSObject

@property UASharedPasteboardManager *manager; // ivar: _manager


+(id)remotePasteboard;
+(void)clearLocalPasteboardInformation;
+(void)initialize;
+(void)localPasteboardDidAddData:(id)arg0 toItemAtIndex:(NSUInteger)arg1 generation:(NSUInteger)arg2 ;
+(void)localPasteboardDidAddItems:(id)arg0 forGeneration:(NSUInteger)arg1 ;
+(void)localPasteboardDidPasteGeneration:(NSUInteger)arg0 ;
+(void)startPreventingPasteboardSharing;
+(void)stopPreventingPasteboardSharing;
-(BOOL)returnPasteboardDataBeforeArchives;
-(id)currentRemoteDeviceName;
-(void)prefetchRemotePasteboardTypes:(id)arg0 ;
-(void)requestRemotePasteboardDataForProcess:(int)arg0 withCompletion:(id)arg1 ;
-(void)requestRemotePasteboardTypesForProcess:(int)arg0 withCompletion:(id)arg1 ;


@end


#endif