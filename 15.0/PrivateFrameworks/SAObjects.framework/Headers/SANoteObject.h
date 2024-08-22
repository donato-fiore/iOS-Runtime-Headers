// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SANOTEOBJECT_H
#define SANOTEOBJECT_H

@class NSString, NSDate;


#import "SADomainObject.h"

@interface SANoteObject : SADomainObject

@property (copy, nonatomic) NSString *contents;
@property (copy, nonatomic) NSDate *createdDate;
@property (copy, nonatomic) NSDate *lastModifiedDate;
@property (nonatomic) BOOL restricted;
@property (copy, nonatomic) NSString *title;


+(id)object;
+(id)objectWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif