// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMININTERACTIONUTILITIES_H
#define IMININTERACTIONUTILITIES_H

@class CSSearchableIndex;

#import <Foundation/Foundation.h>


@interface IMINInteractionUtilities : NSObject

@property (retain, nonatomic) CSSearchableIndex *searchableIndex; // ivar: _searchableIndex


+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)deleteInteractionsWithChatGUIDs:(id)arg0 ;
-(void)deleteInteractionsWithMessageGUIDs:(id)arg0 ;


@end


#endif