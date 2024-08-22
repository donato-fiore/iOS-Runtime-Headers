// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTAVATARRECORDCACHEABLERESOURCE_H
#define AVTAVATARRECORDCACHEABLERESOURCE_H

@class NSString;
@protocol AVTCacheableResource, AVTAvatarRecord;

#import <Foundation/Foundation.h>

#import "AVTUIEnvironment.h"

@interface AVTAvatarRecordCacheableResource : NSObject <AVTCacheableResource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) AVTUIEnvironment *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL includeAvatarData; // ivar: _includeAvatarData
@property (readonly, nonatomic) NSObject<AVTAvatarRecord> *record; // ivar: _record
@property (readonly) Class superclass;


+(id)persistentIdentifierForRecordData:(id)arg0 ;
+(id)persistentIdentifierPrefixForRecordWithIdentifier:(id)arg0 ;
-(BOOL)requiresEncryption;
-(NSUInteger)costForScope:(id)arg0 ;
-(id)identifierForScope:(id)arg0 ;
-(id)initWithAvatarRecord:(id)arg0 includeAvatarData:(BOOL)arg1 environment:(id)arg2 ;
-(id)persistentDataHashForScope:(id)arg0 ;
-(id)persistentIdentifierForScope:(id)arg0 ;
-(id)tokenForObservingChangesWithHandler:(id)arg0 ;
-(id)volatileIdentifierForScope:(id)arg0 ;


@end


#endif