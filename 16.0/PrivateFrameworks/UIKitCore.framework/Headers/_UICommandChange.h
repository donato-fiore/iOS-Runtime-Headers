// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UICOMMANDCHANGE_H
#define _UICOMMANDCHANGE_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _UICommandChange : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) id *anchor; // ivar: _anchor


+(BOOL)supportsSecureCoding;
// -(BOOL)acceptBoolItemInsertionVisit:(id)arg0 itemDeletionVisit:(unk)arg1 menuInsertionVisit:(id)arg2 menuDeletionVisit:(unk)arg3  ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAnchor:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
// -(void)acceptItemInsertionVisit:(id)arg0 itemDeletionVisit:(unk)arg1 menuInsertionVisit:(id)arg2 menuDeletionVisit:(unk)arg3  ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif