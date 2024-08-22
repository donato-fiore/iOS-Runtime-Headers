// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CXTRANSACTION_H
#define CXTRANSACTION_H

@class NSUUID, NSArray, NSString, NSMutableOrderedSet;
@protocol CXCopying, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CXTransaction : NSObject <CXCopying, NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (readonly, copy, nonatomic) NSArray *actions;
@property (readonly, nonatomic, getter=isComplete) BOOL complete;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableOrderedSet *mutableActions; // ivar: _mutableActions
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)allowedClassesForMutableActions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithAction:(id)arg0 ;
-(id)initWithActions:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)sanitizedCopy;
-(id)sanitizedCopyWithZone:(struct _NSZone *)arg0 ;
-(void)addAction:(id)arg0 ;
-(void)addActionsFromTransaction:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateCopy:(id)arg0 withZone:(struct _NSZone *)arg1 ;
-(void)updateSanitizedCopy:(id)arg0 withZone:(struct _NSZone *)arg1 ;


@end


#endif