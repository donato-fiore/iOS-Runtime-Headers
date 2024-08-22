// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSOURCEREVISION_H
#define HDSOURCEREVISION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "HDSourceEntity.h"

@interface HDSourceRevision : NSObject

@property (readonly, nonatomic) ? operatingSystemVersion; // ivar: _operatingSystemVersion
@property (readonly, nonatomic) NSString *productType; // ivar: _productType
@property (readonly, nonatomic) HDSourceEntity *sourceEntity; // ivar: _sourceEntity
@property (readonly, nonatomic) NSString *version; // ivar: _version


-(id)initWithSource:(id)arg0 version:(id)arg1 productType:(id)arg2 operatingSystemVersion:(struct ? )arg3 ;


@end


#endif