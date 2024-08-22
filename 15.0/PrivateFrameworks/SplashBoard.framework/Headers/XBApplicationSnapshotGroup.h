// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef XBAPPLICATIONSNAPSHOTGROUP_H
#define XBAPPLICATIONSNAPSHOTGROUP_H

@class NSString, NSSet;
@protocol NSSecureCoding, BSDescriptionProviding;

#import <Foundation/Foundation.h>

#import "XBSnapshotContainerIdentity.h"

@interface XBApplicationSnapshotGroup : NSObject <NSSecureCoding, BSDescriptionProviding>



@property (copy) XBSnapshotContainerIdentity *containerIdentity; // ivar: _containerIdentity
@property (readonly, copy, nonatomic) NSString *containerPath;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSSet *snapshots; // ivar: _snapshots
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)_validateWithContainerIdentity:(id)arg0 ;
-(BOOL)removeSnapshot:(id)arg0 ;
-(id)_initWithIdentifier:(id)arg0 containerIdentity:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionForStateCaptureWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_commonInit;
-(void)_invalidate;
-(void)_manifestQueueDecode_setStore:(id)arg0 ;
-(void)addSnapshot:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif