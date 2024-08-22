// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CUKEYCHAINITEM_H
#define CUKEYCHAINITEM_H

@class NSString, NSDate, NSDictionary, NSData, NSArray;

#import <Foundation/Foundation.h>


@interface CUKeychainItem : NSObject

@property (copy, nonatomic) NSString *accessGroup; // ivar: _accessGroup
@property (nonatomic) int accessibleType; // ivar: _accessibleType
@property (readonly, copy, nonatomic) NSDate *dateCreated; // ivar: _dateCreated
@property (readonly, copy, nonatomic) NSDate *dateModified; // ivar: _dateModified
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL invisible; // ivar: _invisible
@property (nonatomic) BOOL legacy; // ivar: _legacy
@property (copy, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSData *persistentRef; // ivar: _persistentRef
@property (copy, nonatomic) NSArray *removedMetadata; // ivar: _removedMetadata
@property (copy, nonatomic) NSDictionary *secrets; // ivar: _secrets
@property (nonatomic) int syncType; // ivar: _syncType
@property (copy, nonatomic) NSString *type; // ivar: _type
@property (copy, nonatomic) NSString *userDescription; // ivar: _userDescription
@property (copy, nonatomic) NSString *viewHint; // ivar: _viewHint


-(BOOL)_updateWithAttributesDictionary:(id)arg0 flags:(unsigned int)arg1 error:(*id)arg2 ;
-(BOOL)isEqualToKeychainItem:(id)arg0 flags:(unsigned int)arg1 ;
-(id)_attributesDictionaryWithFlags:(unsigned int)arg0 error:(*id)arg1 ;
-(id)description;
-(id)descriptionWithLevel:(int)arg0 ;
-(void)_mergeItem:(id)arg0 ;


@end


#endif