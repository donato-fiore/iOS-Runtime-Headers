// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IDSURI_H
#define IDSURI_H

@class NSString;
@protocol NSCopying, NSSecureCoding, IDSDestinationProtocol;

#import <Foundation/Foundation.h>


@interface IDSURI : NSObject <NSCopying, NSSecureCoding, IDSDestinationProtocol>



@property (readonly, nonatomic) NSInteger FZIDType;
@property (readonly, nonatomic) NSInteger IDSIDType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *prefixedURI; // ivar: _prefixedURI
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *unprefixedURI;


+(BOOL)supportsSecureCoding;
+(id)URIWithPrefixedURI:(id)arg0 ;
+(id)URIWithUnprefixedURI:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToURI:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)destinationURIs;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPrefixedURI:(id)arg0 ;
-(id)initWithUnprefixedURI:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif