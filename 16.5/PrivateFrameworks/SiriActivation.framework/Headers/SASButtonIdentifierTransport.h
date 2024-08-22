// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASBUTTONIDENTIFIERTRANSPORT_H
#define SASBUTTONIDENTIFIERTRANSPORT_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SASButtonIdentifierTransport : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSString *identifier; // ivar: _identifier


+(BOOL)supportsSecureCoding;
-(BOOL)_identifierMatchesSiriButtonIdentifier:(NSInteger)arg0 ;
-(NSInteger)siriButtonIdentifier;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSiriButtonIdentifier:(NSInteger)arg0 ;
-(id)initWithString:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif