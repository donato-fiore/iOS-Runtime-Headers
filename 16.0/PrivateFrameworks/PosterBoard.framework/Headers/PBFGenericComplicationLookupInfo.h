// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBFGENERICCOMPLICATIONLOOKUPINFO_H
#define PBFGENERICCOMPLICATIONLOOKUPINFO_H

@class NSString, INIntent, NSNumber, ATXComplication;
@protocol PBFComplicationLookupInfo, NSCopying;

#import <Foundation/Foundation.h>


@interface PBFGenericComplicationLookupInfo : NSObject <PBFComplicationLookupInfo, NSCopying>

 {
    NSUInteger _hash;
}


@property (readonly, copy, nonatomic) NSString *complicationContainingBundleIdentifier; // ivar: _complicationContainingBundleIdentifier
@property (readonly, copy, nonatomic) NSString *complicationExtensionBundleIdentifier; // ivar: _complicationExtensionBundleIdentifier
@property (readonly, copy, nonatomic) INIntent *complicationIntent; // ivar: _complicationIntent
@property (readonly, copy, nonatomic) NSNumber *complicationWidgetFamily; // ivar: _complicationWidgetFamily
@property (readonly, copy, nonatomic) NSString *complicationWidgetKind; // ivar: _complicationWidgetKind
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) ATXComplication *suggestedComplication; // ivar: _suggestedComplication
@property (readonly) Class superclass;


+(id)complicationLookupForWidgetFamily:(id)arg0 extensionBundleIdentifier:(id)arg1 containingBundleIdentifier:(id)arg2 kind:(id)arg3 intent:(id)arg4 suggestedComplication:(id)arg5 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif