// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MAPSSUGGESTIONSCONTACT_H
#define MAPSSUGGESTIONSCONTACT_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface MapsSuggestionsContact : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *handleValue; // ivar: _handleValue


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHandleValue:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif