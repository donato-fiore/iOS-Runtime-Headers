// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKFELICASHINKANSENTICKET_H
#define PKFELICASHINKANSENTICKET_H

@class NSArray, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKFelicaShinkansenTicket : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *trains; // ivar: _trains
@property (readonly, copy, nonatomic) NSNumber *validityStartDate; // ivar: _validityStartDate
@property (readonly, copy, nonatomic) NSNumber *validityTerm; // ivar: _validityTerm


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif