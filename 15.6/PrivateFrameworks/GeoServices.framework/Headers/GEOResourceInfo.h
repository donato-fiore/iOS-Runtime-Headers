// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEORESOURCEINFO_H
#define GEORESOURCEINFO_H

@class NSData, NSString, NSArray;

#import <Foundation/Foundation.h>

#import "GEOResource.h"

@interface GEOResourceInfo : NSObject

@property (readonly, nonatomic) NSData *checksum;
@property (copy, nonatomic) NSString *eTag; // ivar: _eTag
@property (copy, nonatomic) NSArray *equivalentResources; // ivar: _equivalentResources
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) GEOResource *resource; // ivar: _resource
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) int validationMethod;


-(BOOL)shouldCheckForUpdateForResourceAtPath:(id)arg0 useExtendedAttrs:(BOOL)arg1 forceUpdateCheck:(BOOL)arg2 log:(id)arg3 ;
-(BOOL)validateResource:(id)arg0 log:(id)arg1 ;
-(BOOL)validateResourceAtPath:(id)arg0 useExtendedAttrs:(BOOL)arg1 log:(id)arg2 ;
-(id)description;
-(id)initWithResource:(id)arg0 ;


@end


#endif