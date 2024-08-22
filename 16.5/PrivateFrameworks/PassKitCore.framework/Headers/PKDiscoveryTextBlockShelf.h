// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKDISCOVERYTEXTBLOCKSHELF_H
#define PKDISCOVERYTEXTBLOCKSHELF_H

@class NSString;


#import "PKDiscoveryShelf.h"

@interface PKDiscoveryTextBlockShelf : PKDiscoveryShelf

@property (readonly, nonatomic) NSString *bodyKey; // ivar: _bodyKey
@property (readonly, nonatomic) NSString *ledeKey; // ivar: _ledeKey
@property (retain, nonatomic) NSString *localizedBody; // ivar: _localizedBody
@property (retain, nonatomic) NSString *localizedLede; // ivar: _localizedLede
@property (retain, nonatomic) NSString *localizedSectionHeaderLine; // ivar: _localizedSectionHeaderLine
@property (readonly, nonatomic) NSString *sectionHeaderLineKey; // ivar: _sectionHeaderLineKey
@property (readonly, nonatomic) NSInteger style; // ivar: _style


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)localizeWithBundle:(id)arg0 ;
-(void)localizeWithBundle:(id)arg0 table:(id)arg1 ;


@end


#endif