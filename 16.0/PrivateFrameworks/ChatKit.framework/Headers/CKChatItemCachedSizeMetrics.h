// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKCHATITEMCACHEDSIZEMETRICS_H
#define CKCHATITEMCACHEDSIZEMETRICS_H

@class NSString, NSDate, IMDoubleLinkedListNode;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CKChatItemCachedSizeMetrics : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *chatItemGUID; // ivar: _chatItemGUID
@property (retain, nonatomic) NSString *key; // ivar: _key
@property (retain, nonatomic) NSDate *lastAccess; // ivar: _lastAccess
@property (retain, nonatomic) IMDoubleLinkedListNode *node; // ivar: _node
@property (nonatomic) CGSize size; // ivar: _size
@property (nonatomic) UIEdgeInsets textAlignmentInsets; // ivar: _textAlignmentInsets


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif