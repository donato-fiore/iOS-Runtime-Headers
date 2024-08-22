// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LKCLASS_H
#define LKCLASS_H

@class NSMutableDictionary, NSString, NSNumber, NSArray;
@protocol LKStudentProviding, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface LKClass : NSObject <LKStudentProviding, NSSecureCoding>



@property (retain, nonatomic) NSMutableDictionary *avatarNameSimilarityDictionary; // ivar: _avatarNameSimilarityDictionary
@property (retain, nonatomic) NSString *classDescription; // ivar: _classDescription
@property (retain, nonatomic) NSNumber *classID; // ivar: _classID
@property (retain, nonatomic) NSString *classImageURL; // ivar: _classImageURL
@property (retain, nonatomic) NSString *className; // ivar: _className
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableDictionary *givenNameSimilarityDictionary; // ivar: _givenNameSimilarityDictionary
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *instructors; // ivar: _instructors
@property (copy, nonatomic) NSArray *students; // ivar: _students
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToLKClass:(id)arg0 ;
-(id)initWithClassDictionary:(id)arg0 usersByUserIdentifier:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStudents:(id)arg0 instructors:(id)arg1 className:(id)arg2 classID:(id)arg3 ;
-(id)sortUsers:(id)arg0 ;
-(void)_updateNamingSimilarityInfoForUser:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif