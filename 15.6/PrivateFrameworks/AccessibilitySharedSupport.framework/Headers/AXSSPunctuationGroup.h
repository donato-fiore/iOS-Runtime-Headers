// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXSSPUNCTUATIONGROUP_H
#define AXSSPUNCTUATIONGROUP_H

@class NSSet, NSUUID, NSString, NSDate, NSArray, NSDictionary, NSData;

#import <Foundation/Foundation.h>


@interface AXSSPunctuationGroup : NSObject

@property (retain, nonatomic) NSSet *autoSwitchContexts; // ivar: _autoSwitchContexts
@property (retain, nonatomic) NSUUID *basePunctuationUUID; // ivar: _basePunctuationUUID
@property (retain, nonatomic) NSString *ckChangeTag; // ivar: _ckChangeTag
@property (retain, nonatomic) NSDate *ckRecordProcessDate; // ivar: _ckRecordProcessDate
@property (retain, nonatomic) NSArray *entries; // ivar: _entries
@property (nonatomic) BOOL inCloud; // ivar: _inCloud
@property (nonatomic) BOOL inDatabase; // ivar: _inDatabase
@property (readonly, nonatomic) BOOL isSystemPunctuationGroup;
@property (readonly, nonatomic) NSDictionary *jsonDictionary;
@property (readonly, nonatomic) NSData *jsonRepresentation;
@property (retain, nonatomic) NSDate *lastModifiedDate; // ivar: _lastModifiedDate
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (nonatomic) unsigned short version; // ivar: _version


+(id)punctuationGroupFromJSONRepresentation:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)init;


@end


#endif