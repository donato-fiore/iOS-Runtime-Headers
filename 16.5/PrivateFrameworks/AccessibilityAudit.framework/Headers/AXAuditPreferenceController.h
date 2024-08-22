// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXAUDITPREFERENCECONTROLLER_H
#define AXAUDITPREFERENCECONTROLLER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface AXAuditPreferenceController : NSObject

@property (retain, nonatomic) NSMutableDictionary *preferenceDictionary; // ivar: _preferenceDictionary


+(id)sharedController;
-(BOOL)spinRunloop;
-(id)init;
-(void)dealloc;
-(void)setSpinRunloop:(BOOL)arg0 ;


@end


#endif