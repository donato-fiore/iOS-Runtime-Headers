// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LPVIDEOMETADATA_H
#define LPVIDEOMETADATA_H

@class NSURL, NSString;
@protocol LPMediaMetadata, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface LPVideoMetadata : NSObject <LPMediaMetadata, NSSecureCoding>



@property (copy, nonatomic) NSURL *URL; // ivar: _URL
@property (copy, nonatomic) NSString *accessibilityText; // ivar: _accessibilityText
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGSize size; // ivar: _size
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *type; // ivar: _type
@property (readonly, nonatomic) unsigned int version; // ivar: _version


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithDictionary:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif