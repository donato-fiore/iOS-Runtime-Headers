// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DKRELATION_H
#define _DKRELATION_H

@class DKObject, NSString;


#import "_DKObject.h"

@interface _DKRelation : DKObject

@property (readonly) _DKObject *object; // ivar: _object
@property (readonly) _DKObject *subject; // ivar: _subject
@property (readonly) NSString *verbPhrase; // ivar: _verbPhrase


+(BOOL)supportsSecureCoding;
+(id)entityName;
+(id)objectFromManagedObject:(id)arg0 readMetadata:(BOOL)arg1 excludedMetadataKeys:(id)arg2 cache:(id)arg3 ;
+(id)relationWithSubject:(id)arg0 verbPhrase:(id)arg1 object:(id)arg2 ;
-(BOOL)copyToManagedObject:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSubject:(id)arg0 verbPhrase:(id)arg1 object:(id)arg2 ;
-(id)stringValue;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif