// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IXDATAPROMISESEED_H
#define IXDATAPROMISESEED_H

@class NSString, NSUUID;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface IXDataPromiseSeed : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) Class clientPromiseClass;
@property (nonatomic) NSUInteger creatorIdentifier; // ivar: _creatorIdentifier
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSUInteger totalBytesNeededOnDisk; // ivar: _totalBytesNeededOnDisk
@property (retain, nonatomic) NSUUID *uniqueIdentifier; // ivar: _uniqueIdentifier


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif