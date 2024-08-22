// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSDEBUGACTIVEWIDGETINFO_H
#define SBSDEBUGACTIVEWIDGETINFO_H

@class NSString;
@protocol BSDescriptionProviding, BSXPCSecureCoding, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SBSDebugActiveWidgetInfo : NSObject <BSDescriptionProviding, BSXPCSecureCoding, NSSecureCoding, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger fakeWidgetCount; // ivar: _fakeWidgetCount
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger liveWidgetCount; // ivar: _liveWidgetCount
@property (nonatomic) NSUInteger staticWidgetCount; // ivar: _staticWidgetCount
@property (readonly) Class superclass;


+(BOOL)supportsBSXPCSecureCoding;
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)encodeWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif