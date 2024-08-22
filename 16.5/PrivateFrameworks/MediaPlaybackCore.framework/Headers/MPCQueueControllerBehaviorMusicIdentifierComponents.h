// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCQUEUECONTROLLERBEHAVIORMUSICIDENTIFIERCOMPONENTS_H
#define MPCQUEUECONTROLLERBEHAVIORMUSICIDENTIFIERCOMPONENTS_H

@class NSString;
@protocol NSCopying, NSObject;

#import <Foundation/Foundation.h>


@interface MPCQueueControllerBehaviorMusicIdentifierComponents : NSObject <NSCopying, NSObject>



@property (readonly, nonatomic) unsigned short behaviorFlags; // ivar: _behaviorFlags
@property (readonly, copy, nonatomic) NSString *contentItemID; // ivar: _contentItemID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *deferredNextContentItemID; // ivar: _deferredNextContentItemID
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isPlaceholder;
@property (readonly, copy, nonatomic) NSString *itemID; // ivar: _itemID
@property (readonly, copy, nonatomic) NSString *itemSpecificContentItemID; // ivar: _itemSpecificContentItemID
@property (readonly, copy, nonatomic) NSString *loadingSectionID; // ivar: _loadingSectionID
@property (readonly, nonatomic) NSInteger repeatIteration; // ivar: _repeatIteration
@property (readonly, copy, nonatomic) NSString *sectionID; // ivar: _sectionID
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(id)itemComponentsWithSectionID:(id)arg0 itemID:(id)arg1 ;
+(id)placeholderComponentsWithLoadingSectionID:(id)arg0 ;
-(id)_copy;
-(id)_initWithContentItemID:(id)arg0 sectionID:(id)arg1 itemID:(id)arg2 repeatIteration:(NSInteger)arg3 type:(NSInteger)arg4 loadingSectionID:(id)arg5 itemSpecificContentItemID:(id)arg6 deferredNextContentItemID:(id)arg7 ;
-(id)copyAsDeferredWithLoadingSectionID:(id)arg0 ;
-(id)copyAsPlaceholder;
-(id)copyWithBehaviorFlags:(unsigned short)arg0 ;
-(id)copyWithRepeatIteration:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif