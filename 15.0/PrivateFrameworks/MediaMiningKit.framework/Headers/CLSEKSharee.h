// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLSEKSHAREE_H
#define CLSEKSHAREE_H

@class NSString;
@protocol NSCoding;

#import <Foundation/Foundation.h>


@interface CLSEKSharee : NSObject <NSCoding>



@property (readonly) NSString *emailAddress; // ivar: _emailAddress
@property (readonly) BOOL isCurrentUserForScheduling; // ivar: _isCurrentUserForScheduling
@property (readonly) BOOL isCurrentUserForSharing; // ivar: _isCurrentUserForSharing
@property (readonly) NSString *name; // ivar: _name


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEKSharee:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif