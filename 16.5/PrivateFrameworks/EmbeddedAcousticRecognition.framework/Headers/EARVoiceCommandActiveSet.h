// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EARVOICECOMMANDACTIVESET_H
#define EARVOICECOMMANDACTIVESET_H

@class NSURL, NSSet;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface EARVoiceCommandActiveSet : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSURL *resourceBaseURL; // ivar: _resourceBaseURL
@property (readonly, copy, nonatomic) NSSet *suites; // ivar: _suites


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPlistJSONDictionary:(id)arg0 ;
-(id)initWithSuites:(id)arg0 resourceBaseURL:(id)arg1 ;
-(id)plistJSONDictionary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif