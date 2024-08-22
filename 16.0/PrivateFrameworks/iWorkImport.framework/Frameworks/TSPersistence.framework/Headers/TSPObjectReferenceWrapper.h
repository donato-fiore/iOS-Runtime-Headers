// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSPOBJECTREFERENCEWRAPPER_H
#define TSPOBJECTREFERENCEWRAPPER_H


#import <Foundation/Foundation.h>

#import "TSPObject.h"

@interface TSPObjectReferenceWrapper : NSObject

@property (readonly, nonatomic) TSPObject *object; // ivar: _object


+(BOOL)allowUnarchivingObjectClass:(Class)arg0 ;
-(id)init;
-(id)initWithReferencedObject:(id)arg0 ;


@end


#endif