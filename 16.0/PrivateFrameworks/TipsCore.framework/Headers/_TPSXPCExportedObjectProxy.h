// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TPSXPCEXPORTEDOBJECTPROXY_H
#define _TPSXPCEXPORTEDOBJECTPROXY_H


#import <Foundation/Foundation.h>


@interface _TPSXPCExportedObjectProxy : NSObject

@property (weak, nonatomic) id *weakExportedObject; // ivar: _weakExportedObject
@property (retain, nonatomic) Class weakExportedObjectClass; // ivar: _weakExportedObjectClass


-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif