// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HIDPREFERENCESLOCAL_H
#define HIDPREFERENCESLOCAL_H

@class NSString;
@protocol HIDPreferencesProtocol;

#import <Foundation/Foundation.h>


@interface HIDPreferencesLocal : NSObject <HIDPreferencesProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)copy:(id)arg0 user:(id)arg1 host:(id)arg2 domain:(id)arg3 reply:(id)arg4 ;
-(void)copyDomain:(id)arg0 domain:(id)arg1 reply:(id)arg2 ;
-(void)copyMultiple:(id)arg0 user:(id)arg1 host:(id)arg2 domain:(id)arg3 reply:(id)arg4 ;
-(void)set:(id)arg0 value:(id)arg1 user:(id)arg2 host:(id)arg3 domain:(id)arg4 ;
-(void)setDomain:(id)arg0 value:(id)arg1 domain:(id)arg2 ;
-(void)setMultiple:(id)arg0 keysToRemove:(id)arg1 user:(id)arg2 host:(id)arg3 domain:(id)arg4 ;
-(void)synchronize:(id)arg0 host:(id)arg1 domain:(id)arg2 ;


@end


#endif