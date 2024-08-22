// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPASSBUCKETTEMPLATE_H
#define PKPASSBUCKETTEMPLATE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "PKPassFieldTemplate.h"

@interface PKPassBucketTemplate : NSObject

@property (nonatomic) NSInteger bucketAlignment; // ivar: _bucketAlignment
@property (nonatomic) CGRect bucketRect; // ivar: _bucketRect
@property (retain, nonatomic) PKPassFieldTemplate *defaultFieldTemplate; // ivar: _defaultFieldTemplate
@property (retain, nonatomic) NSMutableArray *fieldTemplates; // ivar: _fieldTemplates
@property (nonatomic) NSUInteger maxFields; // ivar: _maxFields
@property (nonatomic) CGFloat minFieldPadding; // ivar: _minFieldPadding
@property (nonatomic) BOOL sitsOnStripImage; // ivar: _sitsOnStripImage


-(id)templateForFieldAtIndex:(NSUInteger)arg0 ;
-(void)addFieldTemplate:(id)arg0 ;


@end


#endif