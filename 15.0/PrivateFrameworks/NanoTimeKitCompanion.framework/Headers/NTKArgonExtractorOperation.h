// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKARGONEXTRACTOROPERATION_H
#define NTKARGONEXTRACTOROPERATION_H


#import <Foundation/Foundation.h>

#import "NTKArgonKeyDescriptor.h"

@interface NTKArgonExtractorOperation : NSObject

@property (readonly, nonatomic) NTKArgonKeyDescriptor *keyDescriptor; // ivar: _keyDescriptor
@property (readonly, nonatomic) NSInteger operationType; // ivar: _operationType


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithKeyDescriptor:(id)arg0 operationType:(NSInteger)arg1 ;


@end


#endif