// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDCAMDEMBEDDEDDEVICE_H
#define HMDCAMDEMBEDDEDDEVICE_H

@class NSMutableDictionary, NSString;
@protocol HMDCAMCommunicationProtocols;

#import <Foundation/Foundation.h>


@interface HMDCAMDEmbeddedDevice : NSObject <HMDCAMCommunicationProtocols>

 {
    NSMutableDictionary *_classInstances;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL filterNSDataLogging; // ivar: _filterNSDataLogging
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)instanceOfClass:(Class)arg0 forShortName:(id)arg1 ;
-(id)performCommandFromClass:(id)arg0 method:(id)arg1 arguments:(id)arg2 error:(*id)arg3 ;
-(id)valueForUndefinedKey:(id)arg0 ;


@end


#endif