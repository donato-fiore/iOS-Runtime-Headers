// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDAMTAG_H
#define EDAMTAG_H

@class NSString, NSNumber;


#import "FATObject.h"

@interface EDAMTag : FATObject

@property (retain, nonatomic) NSString *guid; // ivar: _guid
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSString *parentGuid; // ivar: _parentGuid
@property (retain, nonatomic) NSNumber *updateSequenceNum; // ivar: _updateSequenceNum


+(id)structFields;
+(id)structName;


@end


#endif