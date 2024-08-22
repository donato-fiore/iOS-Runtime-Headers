// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NIEXPORTEDOBJECTFORWARDER_H
#define NIEXPORTEDOBJECTFORWARDER_H


#import <Foundation/Foundation.h>


@interface NIExportedObjectForwarder : NSObject

@property (weak) id *exportedObject; // ivar: _exportedObject


-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)initWithExportedObject:(id)arg0 ;


@end


#endif