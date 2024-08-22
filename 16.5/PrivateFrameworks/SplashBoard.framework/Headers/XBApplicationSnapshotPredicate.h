// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef XBAPPLICATIONSNAPSHOTPREDICATE_H
#define XBAPPLICATIONSNAPSHOTPREDICATE_H

@class BSMutableSettings, NSString;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>

#import "XBDisplayEdgeInsetsWrapper.h"

@interface XBApplicationSnapshotPredicate : NSObject <BSDescriptionProviding>

 {
    BSMutableSettings *_clientSettings;
}


@property (nonatomic) NSUInteger contentTypeMask;
@property (copy, nonatomic) XBDisplayEdgeInsetsWrapper *customSafeAreaInsets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isFullScreen) BOOL fullScreen;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat imageScale;
@property (nonatomic) NSUInteger interfaceOrientationMask;
@property (copy, nonatomic) NSString *launchInterfaceIdentifier;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) CGSize referenceSize;
@property (copy, nonatomic) NSString *requiredOSVersion;
@property (copy, nonatomic) NSString *scheme;
@property (nonatomic) NSUInteger statusBarState;
@property (nonatomic) NSUInteger statusBarStateMask;
@property (readonly) Class superclass;
@property (nonatomic) NSInteger userInterfaceStyle;


+(id)predicate;
-(BOOL)_hasClientObjectForKey:(NSUInteger)arg0 ;
-(BOOL)evaluateWithObject:(id)arg0 ;
-(id)_clientObjectForKey:(NSUInteger)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_removeClientObjectForKey:(NSUInteger)arg0 ;
-(void)_setClientObject:(id)arg0 forKey:(NSUInteger)arg1 ;


@end


#endif