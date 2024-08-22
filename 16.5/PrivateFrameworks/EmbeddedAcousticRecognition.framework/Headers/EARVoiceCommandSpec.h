// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EARVOICECOMMANDSPEC_H
#define EARVOICECOMMANDSPEC_H

@class NSSet, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface EARVoiceCommandSpec : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSSet *fstRelativePaths; // ivar: _fstRelativePaths
@property (readonly, nonatomic) NSString *fstSymbol; // ivar: _fstSymbol
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) char valence; // ivar: _valence


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 valence:(char)arg1 fstRelativePaths:(id)arg2 fstSymbol:(id)arg3 ;
-(id)initWithPlistJSONDictionary:(id)arg0 ;
-(id)plistJSONDictionary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif