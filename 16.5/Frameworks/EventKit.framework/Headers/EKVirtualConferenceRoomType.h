// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKVIRTUALCONFERENCEROOMTYPE_H
#define EKVIRTUALCONFERENCEROOMTYPE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface EKVirtualConferenceRoomType : NSObject

@property (readonly, nonatomic) NSString *extensionBundleIdentifier; // ivar: _extensionBundleIdentifier
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSString *originatingExtensionIdentifier; // ivar: _originatingExtensionIdentifier
@property (readonly, nonatomic) NSString *title; // ivar: _title


// +(void)virtualConferenceRoomTypesWithCompletion:(id)arg0 queue:(unk)arg1  ;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithTitle:(id)arg0 identifier:(id)arg1 extensionBundleIdentifier:(id)arg2 ;


@end


#endif