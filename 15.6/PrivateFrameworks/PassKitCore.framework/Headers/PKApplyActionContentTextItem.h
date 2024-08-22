// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKAPPLYACTIONCONTENTTEXTITEM_H
#define PKAPPLYACTIONCONTENTTEXTITEM_H

@class NSString;
@protocol NSCopying, PKIdentifiable;

#import <Foundation/Foundation.h>


@interface PKApplyActionContentTextItem : NSObject <NSCopying, PKIdentifiable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<NSCopying> *identifier;
@property (readonly, copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif