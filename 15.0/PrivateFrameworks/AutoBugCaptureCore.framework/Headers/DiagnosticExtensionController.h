// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DIAGNOSTICEXTENSIONCONTROLLER_H
#define DIAGNOSTICEXTENSIONCONTROLLER_H

@class NSDateFormatter, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DiagnosticExtensionController : NSObject {
    NSDateFormatter *dateFormatter;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, nonatomic) NSString *destinationRootDirectory; // ivar: _destinationRootDirectory


-(id)initWithDestinationDirectory:(id)arg0 ;
-(void)collectDEPayloadsWithIdentifier:(id)arg0 diagnosticExtensions:(id)arg1 queue:(id)arg2 reply:(id)arg3 ;
-(void)collectDEPayloadsWithIdentifier:(id)arg0 diagnosticExtensionsWithParameters:(id)arg1 queue:(id)arg2 reply:(id)arg3 ;


@end


#endif