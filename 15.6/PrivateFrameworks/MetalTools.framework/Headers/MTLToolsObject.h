// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLTOOLSOBJECT_H
#define MTLTOOLSOBJECT_H

@protocol MTLDevice;

#import <Foundation/Foundation.h>

#import "MTLToolsObject.h"
#import "MTLToolsDevice.h"

@interface MTLToolsObject : NSObject {
    MTLToolsObject *_parent;
    MTLToolsDevice *_device;
    uint8_t _externalReferences;
}


@property (retain, nonatomic) id *baseObject; // ivar: _baseObject
@property (readonly) NSObject<MTLDevice> *device;


-(id)description;
-(id)initWithBaseObject:(id)arg0 parent:(id)arg1 ;
-(id)originalObject;
-(id)parent;
-(id)strongParent;
-(void)dealloc;
-(void)setOriginalObject:(id)arg0 ;


@end


#endif