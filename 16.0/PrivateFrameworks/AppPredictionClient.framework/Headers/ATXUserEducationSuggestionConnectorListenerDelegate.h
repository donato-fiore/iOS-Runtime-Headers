// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXUSEREDUCATIONSUGGESTIONCONNECTORLISTENERDELEGATE_H
#define ATXUSEREDUCATIONSUGGESTIONCONNECTORLISTENERDELEGATE_H

@class NSString;
@protocol NSXPCListenerDelegate;

#import <Foundation/Foundation.h>


@interface ATXUserEducationSuggestionConnectorListenerDelegate : NSObject <NSXPCListenerDelegate>

 {
    NSString *_serviceName;
    *unk _interfaceFactory;
    id *_requestHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)initWithServiceName:(id)arg0 interfaceFactory:(*unk)arg1 requestHandler:(id)arg2 ;


@end


#endif