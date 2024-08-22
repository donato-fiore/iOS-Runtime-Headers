// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFADJUSTMENT_H
#define PFADJUSTMENT_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface PFAdjustment : NSObject

@property (readonly, nonatomic) NSString *autoIdentifier; // ivar: _autoIdentifier
@property (readonly, nonatomic) NSDictionary *autoSettings; // ivar: _autoSettings
@property (readonly, nonatomic) BOOL enabled; // ivar: _enabled
@property (readonly, nonatomic) NSUInteger formatVersion; // ivar: _formatVersion
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSString *maskUUID; // ivar: _maskUUID
@property (readonly, nonatomic) NSDictionary *settings; // ivar: _settings


+(BOOL)isValidArchiveDictionary:(id)arg0 errors:(id)arg1 ;
-(id)archiveDictionary;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initWithArchiveDictionary:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 settings:(id)arg1 autoIdentifier:(id)arg2 autoSettings:(id)arg3 enabled:(BOOL)arg4 ;
-(id)initWithIdentifier:(id)arg0 settings:(id)arg1 autoIdentifier:(id)arg2 autoSettings:(id)arg3 enabled:(BOOL)arg4 maskUUID:(id)arg5 ;
-(id)initWithIdentifier:(id)arg0 settings:(id)arg1 enabled:(BOOL)arg2 ;


@end


#endif