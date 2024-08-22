// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKAPPLYACTIONCONTENTACTIONITEM_H
#define PKAPPLYACTIONCONTENTACTIONITEM_H

@class NSString, NSArray;
@protocol NSCopying, PKIdentifiable;

#import <Foundation/Foundation.h>


@interface PKApplyActionContentActionItem : NSObject <NSCopying, PKIdentifiable>



@property (readonly, copy, nonatomic) NSString *contextPrimaryActionIdentifier; // ivar: _contextPrimaryActionIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<NSCopying> *identifier;
@property (readonly, copy, nonatomic) NSArray *items; // ivar: _items
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif