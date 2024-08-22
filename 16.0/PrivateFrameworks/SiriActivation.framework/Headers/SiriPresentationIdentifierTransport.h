// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRIPRESENTATIONIDENTIFIERTRANSPORT_H
#define SIRIPRESENTATIONIDENTIFIERTRANSPORT_H

@class NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SiriPresentationIdentifierTransport : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSNumber *identifier; // ivar: _identifier


+(BOOL)supportsSecureCoding;
-(NSInteger)siriPresentationIdentifier;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSiriPresentationIdentifier:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif