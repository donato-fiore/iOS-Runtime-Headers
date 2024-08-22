// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVHOMEENTITY_H
#define CKVHOMEENTITY_H

@class NSString;
@protocol CKVocabularyItem;

#import <Foundation/Foundation.h>


@interface CKVHomeEntity : NSObject <CKVocabularyItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned short entityType; // ivar: _entityType
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *itemId; // ivar: _itemId
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToHomeEntity:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithItemId:(id)arg0 name:(id)arg1 entityType:(unsigned short)arg2 ;


@end


#endif