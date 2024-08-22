// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOFACTOIDREFERENCE_H
#define GEOFACTOIDREFERENCE_H


#import <Foundation/Foundation.h>

#import "GEOPDFactoidReference.h"

@interface GEOFactoidReference : NSObject {
    GEOPDFactoidReference *_factoidReference;
}


@property (readonly, nonatomic) unsigned int indexInFactoidComponent;
@property (readonly, nonatomic) int linkStyle;


-(id)initWithFactoidReference:(id)arg0 ;


@end


#endif