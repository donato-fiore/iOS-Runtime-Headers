// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDMMCSITEMGROUPSET_H
#define CKDMMCSITEMGROUPSET_H

@class NSError, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface CKDMMCSItemGroupSet : NSObject

@property (readonly, nonatomic) NSError *error;
@property (retain, nonatomic) NSMutableDictionary *itemsByGroupTuple; // ivar: _itemsByGroupTuple


-(id)CKPropertiesDescription;
-(id)allItemGroups;
-(id)description;
-(id)init;
-(id)initWithItems:(id)arg0 ;
-(void)addItem:(id)arg0 ;


@end


#endif