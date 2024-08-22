// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKFIELDMETADATA_H
#define PKFIELDMETADATA_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKFieldMetadata : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *associatedPassIdentifiers; // ivar: _associatedPassIdentifiers
@property (readonly, nonatomic) BOOL foundExplicitlyRequestedPass; // ivar: _foundExplicitlyRequestedPass
@property (readonly, nonatomic) BOOL shouldIgnoreField; // ivar: _shouldIgnoreField


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithAssociatedPassIdentifiers:(id)arg0 shouldIgnoreField:(BOOL)arg1 foundExplicitlyRequestedPass:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif