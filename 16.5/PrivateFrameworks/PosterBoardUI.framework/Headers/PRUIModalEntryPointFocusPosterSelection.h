// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRUIMODALENTRYPOINTFOCUSPOSTERSELECTION_H
#define PRUIMODALENTRYPOINTFOCUSPOSTERSELECTION_H

@class NSString, NSUUID;
@protocol PRUIModalEntryPoint;

#import <Foundation/Foundation.h>


@interface PRUIModalEntryPointFocusPosterSelection : NSObject <PRUIModalEntryPoint>



@property (readonly, copy, nonatomic) NSString *activityIdentifier; // ivar: _activityIdentifier
@property (readonly, copy, nonatomic) NSUUID *activityUUID; // ivar: _activityUUID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsBSXPCSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithActivityUUID:(id)arg0 activityIdentifier:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;


@end


#endif