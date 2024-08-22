// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NWUDPSESSION_H
#define NWUDPSESSION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "NWDatagramConnection.h"
#import "NWPath.h"
#import "NWEndpoint.h"
#import "NWParameters.h"

@interface NWUDPSession : NSObject

@property (retain) NWDatagramConnection *connection; // ivar: _connection
@property (retain, nonatomic) NWPath *currentPath; // ivar: _currentPath
@property (readonly) NWEndpoint *endpoint; // ivar: _endpoint
@property (nonatomic) BOOL hasBetterPath; // ivar: _hasBetterPath
@property NSUInteger internalMTU; // ivar: _internalMTU
@property (readonly, nonatomic) NSString *localPort;
@property NSUInteger maxReadDatagrams; // ivar: _maxReadDatagrams
@property (readonly, nonatomic) NSUInteger maximumDatagramLength;
@property (readonly) NWParameters *parameters; // ivar: _parameters
@property (readonly, copy, nonatomic) NSString *privateDescription;
@property (copy) id *readHandler; // ivar: _readHandler
@property (retain, nonatomic) NWEndpoint *resolvedEndpoint; // ivar: _resolvedEndpoint
@property (nonatomic) NSInteger state; // ivar: _state
@property (nonatomic, getter=isViable) BOOL viable; // ivar: _viable


+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 showFullContent:(BOOL)arg1 ;
-(id)initWithConnection:(id)arg0 ;
-(id)initWithEndpoint:(id)arg0 parameters:(id)arg1 ;
-(id)initWithUpgradeForSession:(id)arg0 ;
-(void)cancel;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)readInternal;
-(void)setupEventHandler;
-(void)tryNextResolvedEndpoint;
-(void)writeDatagram:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeMultipleDatagrams:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif