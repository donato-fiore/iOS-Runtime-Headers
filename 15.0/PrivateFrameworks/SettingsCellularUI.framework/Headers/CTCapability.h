// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CTCAPABILITY_H
#define CTCAPABILITY_H

@class NSMutableDictionary, NSString;

#import <Foundation/Foundation.h>


@interface CTCapability : NSObject

@property (retain) NSMutableDictionary *capability; // ivar: _capability
@property BOOL capabilityFetched; // ivar: _capabilityFetched
@property (copy) NSMutableDictionary *capabilityInfo; // ivar: _capabilityInfo
@property (retain, nonatomic) NSString *capabilityName; // ivar: _capabilityName
@property (retain) NSMutableDictionary *enabledDict; // ivar: _enabledDict
@property BOOL enabledFetched; // ivar: _enabledFetched


-(BOOL)getCapabilityForSlotID:(NSInteger)arg0 ;
-(BOOL)getCapabilityInfo:(id)arg0 forSlotID:(NSInteger)arg1 ;
-(BOOL)getEnabledForSlotID:(NSInteger)arg0 ;
-(id)initWithCapabilityName:(id)arg0 ;
-(id)slotNum:(NSInteger)arg0 ;
-(void)reset;
-(void)setCapable:(BOOL)arg0 forSlotID:(NSInteger)arg1 ;
-(void)setEnabled:(BOOL)arg0 forSlotID:(NSInteger)arg1 ;


@end


#endif