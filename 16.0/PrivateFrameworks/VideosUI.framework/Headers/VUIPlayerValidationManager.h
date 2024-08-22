// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIPLAYERVALIDATIONMANAGER_H
#define VUIPLAYERVALIDATIONMANAGER_H

@class NSMapTable;

#import <Foundation/Foundation.h>


@interface VUIPlayerValidationManager : NSObject

@property (retain, nonatomic) NSMapTable *playerCounts; // ivar: _playerCounts


+(id)sharedInstance;
-(id)_init;
-(id)init;
-(void)addReferenceForPlayer:(id)arg0 ;
-(void)removeReferenceForPlayer:(id)arg0 ;


@end


#endif