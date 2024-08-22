// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKAPPLICATIONMESSAGENODE_H
#define PKAPPLICATIONMESSAGENODE_H

@class NSArray;
@protocol NSObject><NSCopying;

#import <Foundation/Foundation.h>

#import "PKApplicationMessageNode.h"

@interface PKApplicationMessageNode : NSObject {
    BOOL _visited;
}


@property (readonly, nonatomic) NSArray *children;
@property (retain, nonatomic) id *context; // ivar: _context
@property (readonly, nonatomic) NSObject<NSObject><NSCopying> *key;
@property (readonly, nonatomic) NSUInteger numberOfChildren;
@property (readonly, weak, nonatomic) PKApplicationMessageNode *parent; // ivar: _parent
@property (readonly, nonatomic) PKApplicationMessageNode *root;
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(id)createForMessages:(id)arg0 ;
+(id)messageKeysForNode:(id)arg0 localKeys:(*id)arg1 ;
-(id)ancestorPassingTest:(id)arg0 ;
-(id)init;
-(void)visitPostOrder:(id)arg0 ;
-(void)visitPreOrder:(id)arg0 ;


@end


#endif