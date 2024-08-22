// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHCOLLECTIONREFERENCE_H
#define PHCOLLECTIONREFERENCE_H

@class NSString;


#import "PHObjectReference.h"

@interface PHCollectionReference : PHObjectReference

@property (readonly, nonatomic) BOOL transient;
@property (readonly, copy, nonatomic) NSString *transientIdentifier; // ivar: _transientIdentifier
@property (readonly, copy, nonatomic) NSString *transientTitle; // ivar: _transientTitle


+(id)representedType;
-(id)_transientCollectionInLibrary:(id)arg0 ;
-(id)dictionaryForReferenceType:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 referenceType:(id)arg1 ;
-(id)initWithLocalIdentifier:(id)arg0 libraryURL:(id)arg1 transientIdentifier:(id)arg2 transientTitle:(id)arg3 ;


@end


#endif