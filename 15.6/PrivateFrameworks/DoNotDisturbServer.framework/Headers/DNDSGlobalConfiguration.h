// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DNDSGLOBALCONFIGURATION_H
#define DNDSGLOBALCONFIGURATION_H

@class DNDBypassSettings, NSString, NSDate;
@protocol DNDSBackingStoreRecord, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface DNDSGlobalConfiguration : NSObject <DNDSBackingStoreRecord, NSCopying, NSMutableCopying>



@property (readonly, nonatomic, getter=isAutomaticallyGenerated) BOOL automaticallyGenerated; // ivar: _automaticallyGenerated
@property (readonly, copy, nonatomic) DNDBypassSettings *bypassSettings; // ivar: _bypassSettings
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSDate *lastModified; // ivar: _lastModified
@property (readonly, nonatomic) NSUInteger preventAutoReply; // ivar: _preventAutoReply
@property (readonly) Class superclass;


+(id)backingStoreWithFileURL:(id)arg0 ;
+(id)newWithDictionaryRepresentation:(id)arg0 context:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithConfiguration:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentationWithContext:(id)arg0 ;
-(id)init;
-(id)initWithPreventAutoReply:(NSUInteger)arg0 bypassSettings:(id)arg1 lastModified:(id)arg2 automaticallyGenerated:(BOOL)arg3 ;
-(id)mergeWithGlobalConfiguration:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif