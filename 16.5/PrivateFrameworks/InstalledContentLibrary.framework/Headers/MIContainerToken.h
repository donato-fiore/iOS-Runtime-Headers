// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MICONTAINERTOKEN_H
#define MICONTAINERTOKEN_H

@class NSURL, NSString, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MIContainerToken : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSUInteger containerClass; // ivar: _containerClass
@property (readonly, nonatomic) NSURL *containerURL; // ivar: _containerURL
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isTransient; // ivar: _isTransient
@property (readonly, copy, nonatomic) NSString *personaUniqueString; // ivar: _personaUniqueString
@property (readonly, nonatomic) NSData *serializedContainerRepresentation; // ivar: _serializedContainerRepresentation


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContainer:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif