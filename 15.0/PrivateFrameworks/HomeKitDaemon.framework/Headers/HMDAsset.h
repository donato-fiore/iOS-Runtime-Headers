// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDASSET_H
#define HMDASSET_H

@class HMFObject, NSDictionary, NSString, NSURL;
@protocol NSSecureCoding;



@interface HMDAsset : HMFObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (readonly, copy, nonatomic) NSURL *resourceURL; // ivar: _resourceURL


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 metadata:(id)arg1 resourceURL:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif