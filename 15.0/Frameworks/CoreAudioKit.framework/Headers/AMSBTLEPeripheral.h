// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSBTLEPERIPHERAL_H
#define AMSBTLEPERIPHERAL_H

@class CBPeripheral, NSString, CBCentralManager;

#import <Foundation/Foundation.h>


@interface AMSBTLEPeripheral : NSObject {
    CBPeripheral *peripheral;
    NSString *uuid;
    NSString *name;
    CBCentralManager *centralManager;
    CGFloat lastSeen;
    BOOL inputAvailable;
    BOOL outputAvailable;
    BOOL online;
    BOOL available;
}


@property (getter=isAvailable) BOOL available;
@property (getter=isChangingState) BOOL changingState; // ivar: changingState
@property BOOL inputAvailable;
@property CGFloat lastSeen;
@property (retain) NSString *name;
@property (getter=isOnline) BOOL online;
@property BOOL outputAvailable;
@property (readonly) CBPeripheral *peripheral;
@property (readonly, retain) NSString *uuid;


-(BOOL)canConnect;
-(BOOL)connect;
-(BOOL)disconnect;
-(BOOL)hidden;
-(BOOL)updateAvailableStateChanged;
-(id)initWithID:(id)arg0 name:(id)arg1 manager:(id)arg2 ;
-(void)dealloc;


@end


#endif