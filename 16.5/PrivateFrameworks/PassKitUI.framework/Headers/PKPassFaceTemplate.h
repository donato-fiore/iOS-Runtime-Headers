// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPASSFACETEMPLATE_H
#define PKPASSFACETEMPLATE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "PKPassFieldTemplate.h"

@interface PKPassFaceTemplate : NSObject

@property (nonatomic) CGFloat barcodeBottomInset; // ivar: _barcodeBottomInset
@property (nonatomic) CGSize barcodeMaxSize; // ivar: _barcodeMaxSize
@property (retain, nonatomic) NSMutableArray *bucketTemplates; // ivar: _bucketTemplates
@property (retain, nonatomic) PKPassFieldTemplate *defaultFieldTemplate; // ivar: _defaultFieldTemplate


-(id)templateForBucketAtIndex:(NSUInteger)arg0 ;
-(void)addBucketTemplate:(id)arg0 ;


@end


#endif