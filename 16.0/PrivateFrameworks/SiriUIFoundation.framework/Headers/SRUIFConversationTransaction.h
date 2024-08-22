// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SRUIFCONVERSATIONTRANSACTION_H
#define SRUIFCONVERSATIONTRANSACTION_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface SRUIFConversationTransaction : NSObject

@property (readonly, nonatomic) NSArray *insertedItemIndexPaths; // ivar: _insertedItemIndexPaths
@property (readonly, nonatomic) NSArray *presentationStateChangedItemIndexPaths; // ivar: _presentationStateChangedItemIndexPaths
@property (readonly, nonatomic) NSArray *updatedItemIndexPaths; // ivar: _updatedItemIndexPaths


-(id)initWithUpdatedItemIndexPaths:(id)arg0 insertedItemIndexPaths:(id)arg1 presentationStateChangedItemIndexPaths:(id)arg2 ;


@end


#endif