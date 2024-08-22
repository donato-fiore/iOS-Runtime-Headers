// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSFAMILYMEMBER_H
#define IDSFAMILYMEMBER_H

@class NSNumber, NSString, NSArray, NSSet;

#import <Foundation/Foundation.h>


@interface IDSFamilyMember : NSObject

@property (readonly, nonatomic) NSNumber *DSID; // ivar: _DSID
@property (readonly, nonatomic) NSString *appleID; // ivar: _appleID
@property (readonly, nonatomic) NSArray *devices; // ivar: _devices
@property (readonly, nonatomic) NSSet *handles; // ivar: _handles
@property (readonly, nonatomic) NSInteger relationship; // ivar: _relationship


-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithiCloudID:(id)arg0 appleID:(id)arg1 handles:(id)arg2 devices:(id)arg3 ;


@end


#endif