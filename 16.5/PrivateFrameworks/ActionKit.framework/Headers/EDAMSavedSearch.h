// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDAMSAVEDSEARCH_H
#define EDAMSAVEDSEARCH_H

@class NSNumber, NSString;


#import "FATObject.h"
#import "EDAMSavedSearchScope.h"

@interface EDAMSavedSearch : FATObject

@property (retain, nonatomic) NSNumber *format; // ivar: _format
@property (retain, nonatomic) NSString *guid; // ivar: _guid
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSString *query; // ivar: _query
@property (retain, nonatomic) EDAMSavedSearchScope *scope; // ivar: _scope
@property (retain, nonatomic) NSNumber *updateSequenceNum; // ivar: _updateSequenceNum


+(id)structFields;
+(id)structName;


@end


#endif