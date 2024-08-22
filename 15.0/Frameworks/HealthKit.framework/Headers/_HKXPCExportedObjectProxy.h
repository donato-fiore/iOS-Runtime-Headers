// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HKXPCEXPORTEDOBJECTPROXY_H
#define _HKXPCEXPORTEDOBJECTPROXY_H


#import <Foundation/Foundation.h>


@interface _HKXPCExportedObjectProxy : NSObject

@property (weak, nonatomic) id *weakExportedObject; // ivar: _weakExportedObject
@property (retain, nonatomic) Class weakExportedObjectClass; // ivar: _weakExportedObjectClass


-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif