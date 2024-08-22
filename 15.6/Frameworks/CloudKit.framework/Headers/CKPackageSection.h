// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKPACKAGESECTION_H
#define CKPACKAGESECTION_H

@class NSData;

#import <Foundation/Foundation.h>


@interface CKPackageSection : NSObject

@property (readonly, nonatomic) NSInteger index; // ivar: _index
@property (readonly, copy, nonatomic) NSData *signature; // ivar: _signature
@property (nonatomic) NSUInteger size; // ivar: _size


-(id)CKPropertiesDescription;
-(id)description;
-(id)initWithIndex:(NSInteger)arg0 signature:(id)arg1 size:(NSUInteger)arg2 ;


@end


#endif