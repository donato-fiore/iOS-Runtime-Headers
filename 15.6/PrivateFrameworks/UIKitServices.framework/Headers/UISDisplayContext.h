// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UISDISPLAYCONTEXT_H
#define UISDISPLAYCONTEXT_H

@class NSString, FBSDisplayConfiguration;
@protocol BSXPCCoding, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>

#import "UISApplicationSupportDisplayEdgeInfo.h"
#import "UISDisplayShape.h"

@interface UISDisplayContext : NSObject <BSXPCCoding, NSCopying, NSMutableCopying>



@property (readonly, nonatomic) NSUInteger artworkSubtype; // ivar: _artworkSubtype
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) FBSDisplayConfiguration *displayConfiguration; // ivar: _displayConfiguration
@property (readonly, nonatomic) UISApplicationSupportDisplayEdgeInfo *displayEdgeInfo; // ivar: _displayEdgeInfo
@property (readonly, nonatomic) UISDisplayShape *exclusionArea; // ivar: _exclusionArea
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger userInterfaceStyle; // ivar: _userInterfaceStyle


+(id)defaultContext;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithDisplayContext:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithDisplayConfiguration:(id)arg0 ;
-(id)initWithDisplayConfiguration:(id)arg0 displayEdgeInfo:(id)arg1 ;
-(id)initWithDisplayConfiguration:(id)arg0 displayEdgeInfo:(id)arg1 exclusionArea:(id)arg2 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif