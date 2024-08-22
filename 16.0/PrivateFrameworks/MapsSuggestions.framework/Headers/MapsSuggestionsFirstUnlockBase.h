// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MAPSSUGGESTIONSFIRSTUNLOCKBASE_H
#define MAPSSUGGESTIONSFIRSTUNLOCKBASE_H

@class NSString;
@protocol MapsSuggestionsFirstUnlockProtocol;


#import "MapsSuggestionsBaseTrigger.h"

@interface MapsSuggestionsFirstUnlockBase : MapsSuggestionsBaseTrigger <MapsSuggestionsFirstUnlockProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;


-(BOOL)hasDeviceBeenUnlocked;
-(id)initWithName:(id)arg0 ;
-(void)triggerFired:(id)arg0 ;


@end


#endif