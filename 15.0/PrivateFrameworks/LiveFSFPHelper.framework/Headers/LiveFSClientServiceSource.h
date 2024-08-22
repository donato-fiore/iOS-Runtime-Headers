// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LIVEFSCLIENTSERVICESOURCE_H
#define LIVEFSCLIENTSERVICESOURCE_H

@class NSString;
@protocol NSFileProviderServiceSource;

#import <Foundation/Foundation.h>

#import "LiveFSFPExtensionHelper.h"

@interface LiveFSClientServiceSource : NSObject <NSFileProviderServiceSource>

 {
    LiveFSFPExtensionHelper *ex;
    NSString *ident;
}


@property (readonly, copy, nonatomic) NSString *serviceName;


-(id)initWithFileProviderExtension:(id)arg0 itemIdentifier:(id)arg1 ;
-(id)makeListenerEndpointAndReturnError:(*id)arg0 ;


@end


#endif