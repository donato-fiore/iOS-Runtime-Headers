// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EARVOICECOMMANDSUITE_H
#define EARVOICECOMMANDSUITE_H

@class NSSet, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface EARVoiceCommandSuite : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSSet *commandSpecs; // ivar: _commandSpecs
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 commands:(id)arg1 ;
-(id)initWithPlistJSONDictionary:(id)arg0 ;
-(id)plistJSONDictionary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif