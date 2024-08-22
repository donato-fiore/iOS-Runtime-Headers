// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TABDOCUMENTCOLLECTIONITEM_H
#define TABDOCUMENTCOLLECTIONITEM_H

@class NSUUID, NSString;
@protocol TabCollectionItem, NSCopying;

#import <Foundation/Foundation.h>


@interface TabDocumentCollectionItem : NSObject <TabCollectionItem, NSCopying>



@property (retain, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger dragState; // ivar: _dragState
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isPlaceholder; // ivar: _isPlaceholder
@property (nonatomic) NSUInteger mediaStateIcon; // ivar: _mediaStateIcon
@property (nonatomic, getter=isPinned) BOOL pinned; // ivar: _pinned
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif