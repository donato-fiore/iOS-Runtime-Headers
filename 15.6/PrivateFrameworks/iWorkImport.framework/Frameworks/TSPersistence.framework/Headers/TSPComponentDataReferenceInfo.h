// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPCOMPONENTDATAREFERENCEINFO_H
#define TSPCOMPONENTDATAREFERENCEINFO_H


#import <Foundation/Foundation.h>

#import "TSPComponentDataReferenceMap.h"

@interface TSPComponentDataReferenceInfo : NSObject

@property (readonly, nonatomic) TSPComponentDataReferenceMap *componentDataReferenceMap; // ivar: _componentDataReferenceMap
@property (readonly, nonatomic) unsigned char packageIdentifier; // ivar: _packageIdentifier


-(id)init;
-(id)initWithComponentDataReferenceMap:(id)arg0 packageIdentifier:(unsigned char)arg1 ;


@end


#endif