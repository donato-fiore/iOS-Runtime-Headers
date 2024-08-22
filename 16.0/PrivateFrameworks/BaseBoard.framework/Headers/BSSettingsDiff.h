// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BSSETTINGSDIFF_H
#define BSSETTINGSDIFF_H

@class NSMutableSet, NSString;
@protocol BSDescriptionProviding, NSCopying, NSSecureCoding, BSXPCCoding, BSSettingDescriptionProvider;

#import <Foundation/Foundation.h>

#import "BSMutableSettings.h"

@interface BSSettingsDiff : NSObject <BSDescriptionProviding, NSCopying, NSSecureCoding, BSXPCCoding>

 {
    BSMutableSettings *_changes;
    NSMutableSet *_flagRemovals;
    NSMutableSet *_objectRemovals;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<BSSettingDescriptionProvider> *descriptionProvider; // ivar: _descriptionProvider
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)diffFromSettings:(id)arg0 toSettings:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)applyToSettings:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;
-(void)inspectChangesWithBlock:(id)arg0 ;


@end


#endif