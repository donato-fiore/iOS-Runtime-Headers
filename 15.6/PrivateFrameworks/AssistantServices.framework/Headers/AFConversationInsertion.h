// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFCONVERSATIONINSERTION_H
#define AFCONVERSATIONINSERTION_H

@class NSString, AceObject, NSIndexPath;

#import <Foundation/Foundation.h>


@interface AFConversationInsertion : NSObject

@property (readonly, copy, nonatomic) NSString *aceCommandIdentifier; // ivar: _aceCommandIdentifier
@property (readonly, nonatomic) AceObject *aceObject; // ivar: _aceObject
@property (readonly, nonatomic) NSInteger conversationItemType; // ivar: _conversationItemType
@property (readonly, nonatomic, getter=isImmersiveExperience) BOOL immersiveExperience; // ivar: _immersiveExperience
@property (readonly, nonatomic) NSIndexPath *indexPath; // ivar: _indexPath
@property (readonly, nonatomic, getter=isSupplemental) BOOL supplemental; // ivar: _supplemental
@property (readonly, nonatomic, getter=isTransient) BOOL transient; // ivar: _transient


-(id)initWithConversationItemType:(NSInteger)arg0 aceObject:(id)arg1 aceCommandIdentifier:(id)arg2 transient:(BOOL)arg3 supplemental:(BOOL)arg4 immersiveExperience:(BOOL)arg5 indexPath:(id)arg6 ;


@end


#endif