// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDSEARCHABLEINDEXPENDINGITEM_H
#define EDSEARCHABLEINDEXPENDINGITEM_H

@class NSString, NSMutableArray;
@protocol EDIndexableItem;

#import <Foundation/Foundation.h>


@interface EDSearchableIndexPendingItem : NSObject

@property (readonly, nonatomic) NSUInteger estimatedSizeInBytes;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSMutableArray *items; // ivar: _items
@property (readonly, nonatomic) NSObject<EDIndexableItem> *referenceItem; // ivar: _referenceItem
@property (readonly, nonatomic) BOOL requiresPreprocessing;


-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithItem:(id)arg0 ;
-(void)addItem:(id)arg0 ;
-(void)addPendingItem:(id)arg0 ;


@end


#endif