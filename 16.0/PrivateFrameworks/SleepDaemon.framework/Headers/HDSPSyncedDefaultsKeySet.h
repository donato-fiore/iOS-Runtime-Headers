// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSPSYNCEDDEFAULTSKEYSET_H
#define HDSPSYNCEDDEFAULTSKEYSET_H

@class NSDictionary, NSString, NSSet;

#import <Foundation/Foundation.h>


@interface HDSPSyncedDefaultsKeySet : NSObject

@property (readonly, nonatomic) NSDictionary *defaultValues; // ivar: _defaultValues
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSSet *keysToPersist; // ivar: _keysToPersist
@property (readonly, nonatomic) NSSet *keysToSync; // ivar: _keysToSync
@property (readonly, copy, nonatomic) NSString *modificationDateKey; // ivar: _modificationDateKey
@property (readonly, nonatomic) NSSet *perGizmoKeys; // ivar: _perGizmoKeys


-(id)initWithIdentifier:(id)arg0 modficationDateKey:(id)arg1 keysToPersist:(id)arg2 keysToSync:(id)arg3 ;
-(id)initWithIdentifier:(id)arg0 modficationDateKey:(id)arg1 keysToPersist:(id)arg2 keysToSync:(id)arg3 perGizmoKeys:(id)arg4 defaultValues:(id)arg5 ;


@end


#endif