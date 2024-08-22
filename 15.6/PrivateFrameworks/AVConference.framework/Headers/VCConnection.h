// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCCONNECTION_H
#define VCCONNECTION_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface VCConnection : NSObject {
    unsigned short _linkFlags;
    unsigned short _remoteLinkFlags;
    NSDictionary *_connectionSelectionPriorities;
}




-(NSInteger)compare:(id)arg0 isPrimary:(BOOL)arg1 selectionPolicy:(struct ? *)arg2 ;
-(NSInteger)compareConnectionTypePriority:(id)arg0 selectionPolicy:(struct ? *)arg1 ;
-(NSInteger)compareE2EPriority:(id)arg0 selectionPolicy:(struct ? *)arg1 ;
-(NSInteger)compareInterfacePriority:(id)arg0 isPrimary:(BOOL)arg1 ;
-(NSInteger)compareIpVersionPriority:(id)arg0 selectionPolicy:(struct ? *)arg1 ;
-(NSInteger)compareVpnPriority:(id)arg0 selectionPolicy:(struct ? *)arg1 ;
-(id)getConnectionSelectionPriorities;
-(id)init;
-(void)dealloc;
-(void)setLinkFlags:(unsigned short)arg0 ;
-(void)setRemoteLinkFlags:(unsigned short)arg0 ;


@end


#endif