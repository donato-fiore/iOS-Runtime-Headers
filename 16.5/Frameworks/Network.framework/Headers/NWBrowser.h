// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWBROWSER_H
#define NWBROWSER_H

@class NSSet;
@protocol OS_nw_browser;

#import <Foundation/Foundation.h>

#import "NWBrowseDescriptor.h"
#import "NWParameters.h"

@interface NWBrowser : NSObject

@property (readonly) NWBrowseDescriptor *descriptor; // ivar: _descriptor
@property (readonly, nonatomic) NSSet *discoveredEndpoints;
@property (readonly) NSObject<OS_nw_browser> *internalBrowser; // ivar: _internalBrowser
@property (retain) NSSet *internalDiscoveredEndpoints; // ivar: _internalDiscoveredEndpoints
@property (readonly) NWParameters *parameters; // ivar: _parameters


+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
-(id)copyDiscoveredEndpoints;
-(id)initWithDescriptor:(id)arg0 parameters:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(void)setUpdateHandler;


@end


#endif