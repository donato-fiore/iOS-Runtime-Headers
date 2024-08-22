// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPRINTERBROWSER_H
#define PKPRINTERBROWSER_H

@class NSMutableDictionary, NSString, NSXPCConnection;
@protocol PKBrowserClientProtocol, PKPrinterBrowserDelegate;

#import <Foundation/Foundation.h>


@interface PKPrinterBrowser : NSObject <PKBrowserClientProtocol>

 {
    unsigned char _originalCellFlag;
    unsigned char _originalWifiFlag;
    BOOL _delegateRespondsToProximityUpdate;
}


@property (retain, nonatomic) NSMutableDictionary *btDevices; // ivar: _btDevices
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<PKPrinterBrowserDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSXPCConnection *pkBrowseConnection; // ivar: _pkBrowseConnection
@property (retain, nonatomic) NSMutableDictionary *printers; // ivar: _printers
@property (readonly) Class superclass;


+(id)browserWithDelegate:(id)arg0 ;
+(id)browserWithDelegate:(id)arg0 infoDictionary:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 infoDictionary:(id)arg1 ;
-(void)btlePrinterFound:(id)arg0 ;
-(void)btleRssiUpdated:(id)arg0 rssi:(id)arg1 ;
-(void)dealloc;
-(void)printerAdded:(id)arg0 more:(BOOL)arg1 ;
-(void)printerRemoved:(id)arg0 more:(BOOL)arg1 ;


@end


#endif