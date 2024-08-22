// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMACCESSORYINVITATION_H
#define HMACCESSORYINVITATION_H

@class NSString, NSUUID;
@protocol NSSecureCoding, HMObjectMerge;

#import <Foundation/Foundation.h>

#import "HMAccessory.h"

@interface HMAccessoryInvitation : NSObject <NSSecureCoding, HMObjectMerge>



@property (weak, nonatomic) HMAccessory *accessory; // ivar: _accessory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;


+(BOOL)supportsSecureCoding;
-(BOOL)_mergeWithNewObject:(id)arg0 ;
-(id)initWithAccessory:(id)arg0 identifier:(id)arg1 state:(NSInteger)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif