// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKSHARINGDESTINATION_H
#define PKSHARINGDESTINATION_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKSharingDestination : NSObject <NSSecureCoding, NSCopying>

 {
    NSString *_destinationIdentifier;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_name;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)idsDestination;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDestinationIdentifier:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif