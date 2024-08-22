// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OKSETTINGSTRANSACTION_H
#define OKSETTINGSTRANSACTION_H

@class NSMutableDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface OKSettingsTransaction : NSObject {
    NSMutableDictionary *_itemsByKey;
}


@property (readonly, retain, nonatomic) NSArray *items; // ivar: _items


-(id)init;
-(void)dealloc;
-(void)mergeWithTransaction:(id)arg0 ;
-(void)registerTransactionItem:(id)arg0 ;
// -(void)registerUpdateBlock:(id)arg0 forKey:(unk)arg1  ;


@end


#endif