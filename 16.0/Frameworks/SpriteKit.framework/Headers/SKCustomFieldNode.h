// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKCUSTOMFIELDNODE_H
#define SKCUSTOMFIELDNODE_H



#import "SKFieldNode.h"

@interface SKCustomFieldNode : SKFieldNode

@property (copy, nonatomic) id *block;


+(BOOL)supportsSecureCoding;
-(id)_descriptionClassName;
-(id)batchBlock:(SEL)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_initialize;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setBatchBlock:(id)arg0 ;


@end


#endif