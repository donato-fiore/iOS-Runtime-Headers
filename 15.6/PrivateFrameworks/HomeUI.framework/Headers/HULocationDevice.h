// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HULOCATIONDEVICE_H
#define HULOCATIONDEVICE_H

@class NSString;
@protocol NAIdentifiable;

#import <Foundation/Foundation.h>


@interface HULocationDevice : NSObject <NAIdentifiable>



@property (readonly, nonatomic, getter=isCurrentDevice) BOOL currentDevice; // ivar: _currentDevice
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly) Class superclass;


+(id)na_identity;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithFMFDevice:(id)arg0 ;
-(id)initWithHMDevice:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 name:(id)arg1 currentDevice:(BOOL)arg2 ;


@end


#endif