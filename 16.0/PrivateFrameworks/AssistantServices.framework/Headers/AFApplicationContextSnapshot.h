// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFAPPLICATIONCONTEXTSNAPSHOT_H
#define AFAPPLICATIONCONTEXTSNAPSHOT_H

@class NSArray, NSString;
@protocol AFContextSnapshot, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AFApplicationContextSnapshot : NSObject <AFContextSnapshot, NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *applicationContexts; // ivar: _applicationContexts
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithApplicationContexts:(id)arg0 ;
-(id)initWithBuilder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSerializedBackingStore:(id)arg0 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(id)serializedBackingStore;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif