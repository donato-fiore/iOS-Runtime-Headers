// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVMEDIAENTITY_H
#define CKVMEDIAENTITY_H

@class NSString;
@protocol CKVocabularyItem;

#import <Foundation/Foundation.h>


@interface CKVMediaEntity : NSObject <CKVocabularyItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned short entityType; // ivar: _entityType
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *itemId; // ivar: _itemId
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly) Class superclass;


+(id)mediaEntityWithPersistentId:(NSUInteger)arg0 entityType:(unsigned short)arg1 name:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToMediaEntity:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithItemId:(id)arg0 entityType:(unsigned short)arg1 name:(id)arg2 ;


@end


#endif