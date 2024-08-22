// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MIDINETWORKSESSION_H
#define MIDINETWORKSESSION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MIDINetworkSession : NSObject {
    *void _imp;
}


@property (nonatomic) NSUInteger connectionPolicy;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) NSString *localName;
@property (readonly, nonatomic) NSString *networkName;
@property (readonly, nonatomic) NSUInteger networkPort;


+(id)defaultSession;
-(BOOL)addConnection:(id)arg0 ;
-(BOOL)addContact:(id)arg0 ;
-(BOOL)addOrRemoveConnection:(id)arg0 add:(BOOL)arg1 ;
-(BOOL)removeConnection:(id)arg0 ;
-(BOOL)removeContact:(id)arg0 ;
-(id)connections;
-(id)contacts;
-(id)init;
-(unsigned int)destinationEndpoint;
-(unsigned int)sourceEndpoint;
-(void)contactsChanged;
-(void)dealloc;
-(void)refreshBonjourName;
-(void)sessionChanged;
-(void)setStateToEntity;
-(void)updateFromEntity;


@end


#endif